main: main.o fusion.o optimism.o pairwise.o vectors.o
	g++ -o main main.o fusion.o optimism.o pairwise.o vectors.o -std=c++11

tests: tests.o fusion.o optimism.o pairwise.o vectors.o
	g++ -o tests tests.o fusion.o optimism.o pairwise.o vectors.o -std=c++11

main.o: main.cpp fusion.h optimism.h pairwise.h vectors.h
	g++ -c main.cpp -std=c++11
tests.o: tests.cpp doctest.h fusion.h optimism.h pairwise.h vectors.h
	g++ -c tests.cpp -std=c++11


fusion.o: fusion.cpp fusion.h 

optimism.o: optimism.cpp optimism.h 

pairwise.o: pairwise.cpp pairwise.h

vectors.o: vectors.cpp vectors.h 

clean:
	rm -f *.o 