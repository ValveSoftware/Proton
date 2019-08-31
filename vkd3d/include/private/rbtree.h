/*
 * Red-black search tree support
 *
 * Copyright 2009 Henri Verbeet
 * Copyright 2009 Andrew Riedi
 * Copyright 2016 Jacek Caban for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_WINE_RBTREE_H
#define __WINE_WINE_RBTREE_H

#define RB_ENTRY_VALUE(element, type, field) \
    ((type *)((char *)(element) - offsetof(type, field)))

struct rb_entry
{
    struct rb_entry *parent;
    struct rb_entry *left;
    struct rb_entry *right;
    unsigned int flags;
};

typedef int (*rb_compare_func)(const void *key, const struct rb_entry *entry);

struct rb_tree
{
    rb_compare_func compare;
    struct rb_entry *root;
};

typedef void (rb_traverse_func)(struct rb_entry *entry, void *context);

#define RB_FLAG_RED                0x1

static inline int rb_is_red(struct rb_entry *entry)
{
    return entry && (entry->flags & RB_FLAG_RED);
}

static inline void rb_rotate_left(struct rb_tree *tree, struct rb_entry *e)
{
    struct rb_entry *right = e->right;

    if (!e->parent)
        tree->root = right;
    else if (e->parent->left == e)
        e->parent->left = right;
    else
        e->parent->right = right;

    e->right = right->left;
    if (e->right) e->right->parent = e;
    right->left = e;
    right->parent = e->parent;
    e->parent = right;
}

static inline void rb_rotate_right(struct rb_tree *tree, struct rb_entry *e)
{
    struct rb_entry *left = e->left;

    if (!e->parent)
        tree->root = left;
    else if (e->parent->left == e)
        e->parent->left = left;
    else
        e->parent->right = left;

    e->left = left->right;
    if (e->left) e->left->parent = e;
    left->right = e;
    left->parent = e->parent;
    e->parent = left;
}

static inline void rb_flip_color(struct rb_entry *entry)
{
    entry->flags ^= RB_FLAG_RED;
    entry->left->flags ^= RB_FLAG_RED;
    entry->right->flags ^= RB_FLAG_RED;
}

static inline struct rb_entry *rb_head(struct rb_entry *iter)
{
    if (!iter) return NULL;
    while (iter->left) iter = iter->left;
    return iter;
}

static inline struct rb_entry *rb_next(struct rb_entry *iter)
{
    if (iter->right) return rb_head(iter->right);
    while (iter->parent && iter->parent->right == iter) iter = iter->parent;
    return iter->parent;
}

static inline struct rb_entry *rb_postorder_head(struct rb_entry *iter)
{
    if (!iter) return NULL;

    for (;;) {
        while (iter->left) iter = iter->left;
        if (!iter->right) return iter;
        iter = iter->right;
    }
}

static inline struct rb_entry *rb_postorder_next(struct rb_entry *iter)
{
    if (!iter->parent) return NULL;
    if (iter == iter->parent->right || !iter->parent->right) return iter->parent;
    return rb_postorder_head(iter->parent->right);
}

/* iterate through the tree */
#define rb_FOR_EACH(cursor, tree) \
    for ((cursor) = rb_head((tree)->root); (cursor); (cursor) = rb_next(cursor))

/* iterate through the tree using a tree entry */
#define rb_FOR_EACH_ENTRY(elem, tree, type, field) \
    for ((elem) = rb_ENTRY_VALUE(rb_head((tree)->root), type, field); \
         &(elem)->field; \
         (elem) = rb_ENTRY_VALUE(rb_next(&elem->field), type, field))

/* iterate through the tree using using postorder, making it safe to free the entry */
#define rb_FOR_EACH_DESTRUCTOR(cursor, cursor2, tree) \
    for ((cursor) = rb_postorder_head((tree)->root); \
         (cursor) && (((cursor2) = rb_postorder_next(cursor)) || 1); \
         (cursor) = (cursor2))

/* iterate through the tree using a tree entry and postorder, making it safe to free the entry */
#define rb_FOR_EACH_ENTRY_DESTRUCTOR(elem, elem2, tree, type, field) \
    for ((elem) = rb_ENTRY_VALUE(rb_postorder_head((tree)->root), type, field); \
         &(elem)->field \
             && (((elem2) = rb_ENTRY_VALUE(rb_postorder_next(&(elem)->field), type, field)) || 1); \
         (elem) = (elem2))


static inline void rb_postorder(struct rb_tree *tree, rb_traverse_func *callback, void *context)
{
    struct rb_entry *iter, *next;
    rb_FOR_EACH_DESTRUCTOR(iter, next, tree) callback(iter, context);
}

static inline void rb_init(struct rb_tree *tree, rb_compare_func compare)
{
    tree->compare = compare;
    tree->root = NULL;
}

static inline void rb_for_each_entry(struct rb_tree *tree, rb_traverse_func *callback, void *context)
{
    struct rb_entry *iter;
    rb_FOR_EACH(iter, tree) callback(iter, context);
}

static inline void rb_clear(struct rb_tree *tree, rb_traverse_func *callback, void *context)
{
    /* Note that we use postorder here because the callback will likely free the entry. */
    if (callback) rb_postorder(tree, callback, context);
    tree->root = NULL;
}

static inline void rb_destroy(struct rb_tree *tree, rb_traverse_func *callback, void *context)
{
    rb_clear(tree, callback, context);
}

static inline struct rb_entry *rb_get(const struct rb_tree *tree, const void *key)
{
    struct rb_entry *entry = tree->root;
    while (entry)
    {
        int c = tree->compare(key, entry);
        if (!c) return entry;
        entry = c < 0 ? entry->left : entry->right;
    }
    return NULL;
}

static inline int rb_put(struct rb_tree *tree, const void *key, struct rb_entry *entry)
{
    struct rb_entry **iter = &tree->root, *parent = tree->root;

    while (*iter)
    {
        int c;

        parent = *iter;
        c = tree->compare(key, parent);
        if (!c) return -1;
        else if (c < 0) iter = &parent->left;
        else iter = &parent->right;
    }

    entry->flags = RB_FLAG_RED;
    entry->parent = parent;
    entry->left = NULL;
    entry->right = NULL;
    *iter = entry;

    while (rb_is_red(entry->parent))
    {
        if (entry->parent == entry->parent->parent->left)
        {
            if (rb_is_red(entry->parent->parent->right))
            {
                rb_flip_color(entry->parent->parent);
                entry = entry->parent->parent;
            }
            else
            {
                if (entry == entry->parent->right)
                {
                    entry = entry->parent;
                    rb_rotate_left(tree, entry);
                }
                entry->parent->flags &= ~RB_FLAG_RED;
                entry->parent->parent->flags |= RB_FLAG_RED;
                rb_rotate_right(tree, entry->parent->parent);
            }
        }
        else
        {
            if (rb_is_red(entry->parent->parent->left))
            {
                rb_flip_color(entry->parent->parent);
                entry = entry->parent->parent;
            }
            else
            {
                if (entry == entry->parent->left)
                {
                    entry = entry->parent;
                    rb_rotate_right(tree, entry);
                }
                entry->parent->flags &= ~RB_FLAG_RED;
                entry->parent->parent->flags |= RB_FLAG_RED;
                rb_rotate_left(tree, entry->parent->parent);
            }
        }
    }

    tree->root->flags &= ~RB_FLAG_RED;

    return 0;
}

static inline void rb_remove(struct rb_tree *tree, struct rb_entry *entry)
{
    struct rb_entry *iter, *child, *parent, *w;
    int need_fixup;

    if (entry->right && entry->left)
        for(iter = entry->right; iter->left; iter = iter->left);
    else
        iter = entry;

    child = iter->left ? iter->left : iter->right;

    if (!iter->parent)
        tree->root = child;
    else if (iter == iter->parent->left)
        iter->parent->left = child;
    else
        iter->parent->right = child;

    if (child) child->parent = iter->parent;
    parent = iter->parent;

    need_fixup = !rb_is_red(iter);

    if (entry != iter)
    {
        *iter = *entry;
        if (!iter->parent)
            tree->root = iter;
        else if (entry == iter->parent->left)
            iter->parent->left = iter;
        else
            iter->parent->right = iter;

        if (iter->right) iter->right->parent = iter;
        if (iter->left)  iter->left->parent = iter;
        if (parent == entry) parent = iter;
    }

    if (need_fixup)
    {
        while (parent && !rb_is_red(child))
        {
            if (child == parent->left)
            {
                w = parent->right;
                if (rb_is_red(w))
                {
                    w->flags &= ~RB_FLAG_RED;
                    parent->flags |= RB_FLAG_RED;
                    rb_rotate_left(tree, parent);
                    w = parent->right;
                }
                if (rb_is_red(w->left) || rb_is_red(w->right))
                {
                    if (!rb_is_red(w->right))
                    {
                        w->left->flags &= ~RB_FLAG_RED;
                        w->flags |= RB_FLAG_RED;
                        rb_rotate_right(tree, w);
                        w = parent->right;
                    }
                    w->flags = (w->flags & ~RB_FLAG_RED) | (parent->flags & RB_FLAG_RED);
                    parent->flags &= ~RB_FLAG_RED;
                    if (w->right)
                        w->right->flags &= ~RB_FLAG_RED;
                    rb_rotate_left(tree, parent);
                    child = NULL;
                    break;
                }
            }
            else
            {
                w = parent->left;
                if (rb_is_red(w))
                {
                    w->flags &= ~RB_FLAG_RED;
                    parent->flags |= RB_FLAG_RED;
                    rb_rotate_right(tree, parent);
                    w = parent->left;
                }
                if (rb_is_red(w->left) || rb_is_red(w->right))
                {
                    if (!rb_is_red(w->left))
                    {
                        w->right->flags &= ~RB_FLAG_RED;
                        w->flags |= RB_FLAG_RED;
                        rb_rotate_left(tree, w);
                        w = parent->left;
                    }
                    w->flags = (w->flags & ~RB_FLAG_RED) | (parent->flags & RB_FLAG_RED);
                    parent->flags &= ~RB_FLAG_RED;
                    if (w->left)
                        w->left->flags &= ~RB_FLAG_RED;
                    rb_rotate_right(tree, parent);
                    child = NULL;
                    break;
                }
            }
            w->flags |= RB_FLAG_RED;
            child = parent;
            parent = child->parent;
        }
        if (child) child->flags &= ~RB_FLAG_RED;
    }

    if (tree->root) tree->root->flags &= ~RB_FLAG_RED;
}

static inline void rb_remove_key(struct rb_tree *tree, const void *key)
{
    struct rb_entry *entry = rb_get(tree, key);
    if (entry) rb_remove(tree, entry);
}

#endif  /* __WINE_WINE_RBTREE_H */
