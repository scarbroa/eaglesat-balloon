CC=gcc
CFLAGS=-g -Wall
LIBS=
DEPS=comms.h
SRCS=comms.c main.c
OBJS=$(SRCS:.c=.o)
MAIN=comms_test

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $(MAIN) $(OBJS)

.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) *.o $(MAIN)
