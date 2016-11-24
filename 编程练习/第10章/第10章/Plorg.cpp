#define _CRT_SECURE_NO_WARNINGS
#include "Plorg.h"
#include<iostream>

using namespace std;


Plorg::Plorg(int ci, char * name):m_nCI(ci)
{
	strcpy(m_sName, name);
}

void Plorg::SetCI(int ci)
{
	m_nCI = ci;
}

void Plorg::Print() const
{
	cout << "Name:" << m_sName << " CI:" << m_nCI << endl;
}

Plorg::~Plorg()
{
}
