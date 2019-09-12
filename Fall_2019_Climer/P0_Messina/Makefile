CC=gcc
CFLAGS=-g -I.
OBJS=P0_main.o buildTree.o traversals.o 
DEPS=buildTree.h traversals.h node.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
P0: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm *.o
