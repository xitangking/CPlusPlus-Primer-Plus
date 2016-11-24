#pragma once

#include<iostream>

class Golf
{
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:

	Golf(const char* name,int hc);

	Golf();

	~Golf();

	void setgolf(const char *name,int hc)
	{
		*this = Golf(name, hc);
	}

	int setgolf();
	
	void Handicap(int hc);

	void showgolf();
};

