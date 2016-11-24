#define _CRT_SECURE_NO_WARNINGS
#include "Golf.h"

using namespace std;

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

Golf::Golf()
{
}


Golf::~Golf()
{
}

int Golf::setgolf()
{
	cout << "please enter your name:";
	cin >> fullname;
	cout << "please enter your handicap:";
	cin >> handicap;
	if (strlen(fullname) == 0)
	{
		return 0;
	}
	else
		return 1;
}


void Golf::Handicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf()
{
	std::cout << "Name: " << fullname << "	Handicap: " << handicap << std::endl;

}
