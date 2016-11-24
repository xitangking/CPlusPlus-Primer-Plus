#define _CRT_SECURE_NO_WARNINGS
#include "Cow.h"
#include<iostream>


Cow::Cow()
{
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	*this = c;
}

Cow & Cow::operator=(const Cow & c)
{
	// TODO: 在此处插入 return 语句
	this->weight = c.weight;
	strcpy(this->name, c.name);
	strcpy(this->hobby, c.hobby);
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << " name: " << name << std::endl;
	std::cout << "hobby: " << hobby << std::endl;
	std::cout << "weight: " << weight << std::endl;
}


Cow::~Cow()
{
}
