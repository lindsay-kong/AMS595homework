# compiler
CC = g++
CFLAGS = -std=c++11 -Wall

# target executable
all: HW2main

HW2main: HW2main.o q1.o q2.o
	$(CC) $(CFLAGS) -o $@ $^

HW2main.o: HW2main.cpp
	$(CC) $(CFLAGS) -c $<

q1.o: q1.cpp
	$(CC) $(CFLAGS) -c $<

q2.o: q2.cpp
	$(CC) $(CFLAGS) -c $<

# clean rule to remove object files and the executable
clean:
	rm -f *.o HW2main

