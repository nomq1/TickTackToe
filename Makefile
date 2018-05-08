CC = g++
# CC = gcc
CFLAGS  = -g -Wall

all: main.o Board.o Point.o IllegalCoordinateException.o IllegalCharException.o 
	$(CC) $(CFLAGS) -o all main.o Board.o Point.o IllegalCoordinateException.o  IllegalCharException.o 
	

Board.o: Board.cpp Board.hpp
	$(CC) $(CFLAGS) -c Board.cpp

Point.o: Point.cpp Point.hpp
	$(CC) $(CFLAGS) -c Point.cpp 

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.hpp
	$(CC) $(CFLAGS) -c IllegalCoordinateException.cpp

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.hpp
	$(CC) $(CFLAGS) -c IllegalCharException.cpp
	

clean:
	
	rm all *.o