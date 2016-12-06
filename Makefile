
count: main.o
	gcc main.o

check: cppcheck.o valgrind.o
	gcc cppcheck.o valgrind.o

main.o: main.cc counter.cc
	gcc -c main.cc counter.cc

cppcheck.o: main.cc counter.cc
	cppcheck main.cc counter.cc

vagrind.o: main.o
	gcc main.o
	valgrind --leak-check=full ./a.out

