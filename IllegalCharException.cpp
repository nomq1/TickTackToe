#include <iostream>
#include "IllegalCharException.hpp"


IllegalCharException::IllegalCharException(char c)
{
  this->c=c;
}


char IllegalCharException::theChar() const
{
	return this->c;
}
