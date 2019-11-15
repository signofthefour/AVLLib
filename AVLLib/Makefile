all: avltest

DEFS = -DUSE_SOME_DEF

avltest: main.o
	g++ main.o -std=c++11 -o avltest $(DEFS)
main.o: main.cpp
	g++ -c main.cpp AVLTree.h -std=c++11 $(DEFS)

clean:
	rm *.o avltest
