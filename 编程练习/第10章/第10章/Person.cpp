#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"



Person::Person()
{
	lname = " ";
	fname[0] = '\0';
}

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << lname << "," << fname << std::endl;
}


Person::~Person()
{
}
