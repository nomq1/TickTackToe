#include <iostream>
#include "IllegalCharException.h"


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
