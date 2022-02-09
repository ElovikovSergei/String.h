CFLAGS=-std=c11 -Wall -Wextra -Werror -std=c11
LINFLAGS=-lcheck -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
VALGRIND=valgrind --leak-check=full --leak-resolution=med -s
OS:= $(shell uname -s)
all: clean test s21_string.a
test: s21_string.a
ifeq ($(OS), Darwin)
	gcc s21_string_tests.c s21_string.a -o test `pkg-config --cflags --libs check`
	./test
else
	gcc s21_string_tests.c s21_string.a -o test $(LINFLAGS)
	./test
endif
s21_string.o: s21_string.c s21_string.h
	gcc $(CFLAGS) -c s21_string.c
s21_string.a: s21_string.o
	ar r s21_string.a s21_string.o
gcov_report: 
ifeq ($(OS), Darwin)
	gcc --coverage s21_string_tests.c -o s21_string_tests s21_string.c `pkg-config --cflags --libs check`
	./s21_string_tests
	lcov -t "s21_string_tests" -o s21_string_tests.info -c -d .   
	genhtml -o report s21_string_tests.info
	open ./report/index.html
	rm -rf *.gcda *.gcno s21_string_tests s21_string_tests.info
else
	gcc --coverage s21_string_tests.c -o s21_string_tests s21_string.c $(LINFLAGS)
	./s21_string_tests
	lcov -t "s21_string_tests" -o s21_string_tests.info -c -d .  
	genhtml -o report s21_string_tests.info
	xdg-open ./report/index.html
	rm -rf *.gcda *.gcno s21_string_tests s21_string_tests.info
endif
clean:
	rm -rf test *.a *.o *.out *.cfg fizz *.gc* *.info report
memory: test
ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./test
	rm -rf s21_string.o
else
	$(VALGRIND) ./test
	rm -rf s21_string.o
endif
s21_string_tests.c: s21_string-test.check s21_string.h
	checkmk s21_string-test.check >s21_string_tests.c
check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.h *.c
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h
	CK_FORK=no leaks --atExit -- ./test