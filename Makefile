CC := gcc
CFLAGS := -std=c17 -O -g -Wall -Wextra -Wpedantic

default: binary

binary: example.o
	@$(CC) $(CFLAGs) -I./ example.c -o $@

example.o: log.h
	@$(CC) $(CFLAGS) -c example.c -o $@

log.h:

.PHONY: clean
clean:
	@rm -rf *.o binary

.PHONY: run
run: binary
	@./binary
