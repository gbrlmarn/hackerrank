CC = g++
CXXFLAGS = -g -Wall -Wextra
OBJS = deque_stl

.PHONY: all clean

all: $(OBJS)

deque_stl: deque_stl.o

deque_stl.o: deque_stl.cpp

clean:
	rm -rf *~ *.o
	rm -rf $(OBJS)
