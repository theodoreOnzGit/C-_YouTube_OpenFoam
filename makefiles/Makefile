.DEFAULT_GOAL := generate

generate: main.o vectors.o
	g++ main.o vectors.o -o vectors1	
	rm -rf *.o

main.o: main.cpp
	g++ -c main.cpp

vectors.o: vectors.cpp
	g++ -c vectors.cpp

clean: 
	rm -rf *.o vectors1


