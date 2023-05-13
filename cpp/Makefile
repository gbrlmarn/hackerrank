CC = g++
CXXFLAGS = -g -Wall -Wextra
OBJS = deque_stl class_template_specialization

.PHONY: all clean

all: $(OBJS)

deque_stl: deque_stl.o

deque_stl.o: deque_stl.cpp

class_template_specialization: class_template_specialization.o

class_template_specialization.o: class_template_specialization.cpp

clean:
	rm -rf *~ *.o
	rm -rf $(OBJS)
