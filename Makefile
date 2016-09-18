.PHONY: all

CC := gcc
SOFLAGS := -g -shared -fPIC -Isrc

liblogger.a: logger.c
	ar rcs $@ $^

liblogger.so: logger.c
	$(CC) $^ $(SOFLAGS) -o $@

test: test_color test_logger

test_color:
	$(CC) tests/color_test.c -o color_test
	./color_test
	rm ./color_test

test_logger: logger.c
	$(CC) tests/logger_test.c logger.c -I./ -o logger_test
	./logger_test
	rm ./logger_test

benchmark:
	$(CC) benchmarks/timeformat.c -Ibenchmarks -o timeformat
	./timeformat
	rm ./timeformat
