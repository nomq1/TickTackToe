#include <iostream>
#include "IllegalCharException.hpp"


IllegalCharException::IllegalCharException(char c)
{
  this->c=c;
}

char IllegalCharException::IllegalChar() const
{
	return this->c;
}

char IllegalCharException::theChar() const
{
	return this->c;
}
