SRCS := $(wildcard *.cpp)
CC := g++
BINS := $(SRCS:%.cpp=%)




all: compile helloWorld




helloWorld:
	@echo "hello World"
	@echo "trololol"

compile: main.o vectors.o vectors.h  
	${CC} main.o vectors.o -o vectors1

clean: 
	@rm -rf vectors1
	@rm -rf *.o

listCPPFiles:
	@echo ${SRCS}
	@echo ${BINS}



main.o: main.cpp
	${CC} -c main.cpp

vectors.o: vectors.cpp vectors.h
	${CC} -c vectors.cpp


