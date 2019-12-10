CC=g++
CFLAGS=-Wall -std=c++98
CXXFLAGS=-std=c++11 -Wall -c

all: build

build: count

count: finalwc.cc
	$(CC) $(CFLAGS) finalwc.cc -o count

test.o: test.cc
	$(CC) $(CXXFLAGS) test.cc 
	
doc:
	Doxygen -g finaldoc
	Doxygen finaldoc

check:
	cppcheck *.cc
	valgrind ./count

clean:
	-rm *.o count
	-rm -r latex
	-rm -r html
	-rm finaldoc

testing: build runtest

runtest: test
	./test
	
test: test.o 
	$(CXX) -o $@ $^