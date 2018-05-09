CXX=clang++-5.0
CXXFLAGS=-std=c++17

all: Board.o IllegalCharException.o IllegalCoordinateException.o Point.o Node.o

Board.o: Board.cpp Board.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o
	
Node.o: Node.cpp Node.hpp
	$(CXX) $(CXXFLAGS) -c Node.cpp -o Node.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.hpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Point.o: Point.cpp Point.hpp
	$(CXX) $(CXXFLAGS) -c Point.cpp -o Point.o


clean:
	RM *.o 
