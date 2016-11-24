#define _CRT_SECURE_NO_WARNINGS
#include "1.golf.h"
#include<iostream>

void setgolf(golf & g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	using namespace std;
	cout << "please enter your name:";
	cin >> g.fullname;
	cout << "please enter your handicap:";
	cin >> g.handicap;
	if (strlen(g.fullname) == 0)
	{
		setgolf(g, NULL, 0);
		return 0;
	}
	else
		return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "Name: " << g.fullname << "	Handicap: " << g.handicap << std::endl;
}