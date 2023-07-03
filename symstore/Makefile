all: symstore

symstore: symstore.c
	$(CC) -o $@ symstore.c $(SYMSTORE_CFLAGS) -D__WINESRC__ -DWINE_UNIX_LIB -Wall -g -Wall -Wno-packed-not-aligned
