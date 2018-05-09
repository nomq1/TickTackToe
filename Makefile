CXX=clang++-5.0
CXXFLAGS=-std=c++17

all: Board.o IllegalCharException.o IllegalCoordinateException.o Point.o Node.o

Board.o: Board.cpp Board.h
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o
	
Node.o: Node.cpp Node.h
	$(CXX) $(CXXFLAGS) -c Node.cpp -o Node.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Point.o: Point.cpp Point.h
	$(CXX) $(CXXFLAGS) -c Point.cpp -o Point.o


clean:
	RM *.o 
