CFLAGS = -Wall -Wextra -g

test: test.o oclerrno.o
	$(CC) $(LDFLAGS) $^ -o $@ $(LDLIBS)

.PHONY: clean
clean:
	rm -f *.o test
