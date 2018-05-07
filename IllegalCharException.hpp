
#include <string>
#include <exception>

using namespace std;

class IllegalCharException : public exception
{
public:
    char c;
	IllegalCharException(char c);
	char IllegalChar()const;
	char theChar()const;
};
