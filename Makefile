CC=gcc
CFLAGS=-g -Wall
LIBS=
DEPS=crp/crp.h crp/crp_generateFilename.h comms/comms.h mde/mde.h telemetry/telemetry.h
SRCS=crp/crp.c crp/crp_generateFilename.c comms/comms.c mde/mde.c telemetry/telemetry.c main.c
OBJS=$(SRCS:.c=.o)
MAIN=balloon_test

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $(MAIN) $(OBJS)

.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) src/ps/*.o $(MAIN)
