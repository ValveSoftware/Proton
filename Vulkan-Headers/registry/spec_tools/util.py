"""Utility functions not closely tied to other spec_tools types."""
# Copyright (c) 2018-2019 Collabora, Ltd.
# Copyright (c) 2013-2019 The Khronos Group Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


def getElemName(elem, default=None):
    """Get the name associated with an element, either a name child or name attribute."""
    name_elem = elem.find('name')
    if name_elem is not None:
        return name_elem.text
    # Fallback if there is no child.
    return elem.get('name', default)


def getElemType(elem, default=None):
    """Get the type associated with an element, either a type child or type attribute."""
    type_elem = elem.find('type')
    if type_elem is not None:
        return type_elem.text
    # Fallback if there is no child.
    return elem.get('type', default)


def findFirstWithPredicate(collection, pred):
    """Return the first element that satisfies the predicate, or None if none exist.

    NOTE: Some places where this is used might be better served by changing to a dictionary.
    """
    for elt in collection:
        if pred(elt):
            return elt
    return None


def findNamedElem(elems, name):
    """Traverse a collection of elements with 'name' nodes or attributes, looking for and returning one with the right name.

    NOTE: Many places where this is used might be better served by changing to a dictionary.
    """
    return findFirstWithPredicate(elems, lambda elem: getElemName(elem) == name)


def findTypedElem(elems, typename):
    """Traverse a collection of elements with 'type' nodes or attributes, looking for and returning one with the right typename.

    NOTE: Many places where this is used might be better served by changing to a dictionary.
    """
    return findFirstWithPredicate(elems, lambda elem: getElemType(elem) == typename)


def findNamedObject(collection, name):
    """Traverse a collection of elements with 'name' attributes, looking for and returning one with the right name.

    NOTE: Many places where this is used might be better served by changing to a dictionary.
    """
    return findFirstWithPredicate(collection, lambda elt: elt.name == name)
