SRCS := $(wildcard *.cpp)




all: compile helloWorld




helloWorld:
	@echo "hello World"
	@echo "trololol"

compile: main.o vectors.o vectors.h  
	g++ main.o vectors.o -o vectors1

clean: 
	@rm -rf vectors1
	@rm -rf *.o

listCPPFiles:
	@echo ${SRCS}



main.o: main.cpp
	g++ -c main.cpp

vectors.o: vectors.cpp vectors.h
	g++ -c vectors.cpp


