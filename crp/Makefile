CC=gcc
CFLAGS=-g -Wall
LIBS=
DEPS=crp.h crp_generateFilename.h
SRCS=crp.c crp_generateFilename.c main.c
OBJS=$(SRCS:.c=.o)
MAIN=crp_test

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $(MAIN) $(OBJS)

.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) *.o $(MAIN)
