CC = g++
CFLAGS = -std=c++11 -Wall

all: HW2main

HW2main: HW2main.o q1.o q2.o
	$(CC) $(CFLAGS) -o $@ $^

HW2main.o: HW2main.cpp
	$(CC) $(CFLAGS) -c $<

q1.o: q1.cpp
	$(CC) $(CFLAGS) -c $<

q2.o: q2.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o HW2main

