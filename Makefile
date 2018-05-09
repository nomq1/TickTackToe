CXX=g++
CXXFLAGS=-std=c++17
a.out: Board.o Point.o IllegalCoordinateException.o IllegalCharException.o
	$(CXX) $(CXXFLAGS) -c Board.o Point.o IllegalCoordinateException.o IllegalCharException.o -o a.out
Board.o: Board.cpp Board.h IllegalCoordinateException.h IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o

Point.o: Point.cpp Point.h
	$(CXX) $(CXXFLAGS) -c Point.cpp -o Point.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o

clean:
	rm *.o a.out
