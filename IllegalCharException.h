
#include <string>
#include <exception>

using namespace std;

class IllegalCharException : public exception
{
public:
    char c;
	IllegalCharException(char c);
	char theChar()const;
	 void setInput(int ch) { 
		 c = ch;
		  }
};
