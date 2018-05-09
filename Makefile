CC = g++
# CC = gcc
CFLAGS  = -g -Wall

all:  Board.o Point.o IllegalCoordinateException.o IllegalCharException.o 
	$(CC) $(CFLAGS) -o all Board.o Point.o IllegalCoordinateException.o  IllegalCharException.o 
	

Board.o: Board.cpp Board.h
	$(CC) $(CFLAGS) -c Board.cpp

Point.o: Point.cpp Point.h
	$(CC) $(CFLAGS) -c Point.cpp 

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CC) $(CFLAGS) -c IllegalCoordinateException.cpp

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CC) $(CFLAGS) -c IllegalCharException.cpp
	

clean:
	
	rm all *.o
