CC =g++

CFLAGS = -Wall -g

all.out:main.o Board.o Point.o IllegalCoordinateException.o IllegalCharException.o 
	$(CC) $(CFLAGS) -o all main.o Board.o Point.o IllegalCoordinateException.o  IllegalCharException.o -o all.out 
	

Board.o: Board.cpp Board.h
	$(CC) $(CFLAGS) -c Board.cpp

Point.o: Point.cpp Point.h
	$(CC) $(CFLAGS) -c Point.cpp 

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CC) $(CFLAGS) -c IllegalCoordinateException.cpp

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CC) $(CFLAGS) -c IllegalCharException.cpp
	
main.o: main.cpp 
		$(CC) $(CFLAGS) -c main.cpp

clean:
	
		rm *.o all.out

