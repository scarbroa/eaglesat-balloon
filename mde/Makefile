CC=gcc
CFLAGS=-g -Wall
LIBS=
DEPS=mde.h
SRCS=mde.c main.c
OBJS=$(SRCS:.c=.o)
MAIN=mde_test

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $(MAIN) $(OBJS)

.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) *.o $(MAIN)
