#pragma once

#include"pairs.h"
#include<iostream>
#include<valarray>
using namespace std;

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine :private string,private PairArray
{
private:
	int m_nYears;
public:
	Wine() :string("none"), m_nYears(0), PairArray(ArrayInt(), ArrayInt()) {  }
	Wine(const char * l, int y, const int yr[], const int bot[]) :string(l), m_nYears(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
	{
	}
	Wine(const char * l, int y) :PairArray(ArrayInt(y), ArrayInt(y)),string(l)
	{
		m_nYears = y;
	}
	void GetBottles()
	{
		std::cout << "Enter " << (string)*this << " data for " << m_nYears << " years" << std::endl;
		for (int i = 0; i < m_nYears; i++)
		{
			std::cout << "Enter years: ";
			std::cin >> PairArray::first()[i];
			std::cout << "Enter bottles for that years: ";
			std::cin >> PairArray::second()[i];
		}
	}
	std::string & Label()
	{
		return *this;
	}
	int sum()
	{
		return PairArray::second().sum();
	}
	void Show()
	{
		std::cout << "Wine: " << (string)*this << std::endl;
		std::cout << "Years\t\tBottles" << std::endl;
		ArrayInt a = PairArray::first();
		ArrayInt b = PairArray::second();
		for (int i = 0; i < m_nYears; i++)
		{
			std::cout << a[i] << "\t\t" << b[i] << std::endl;
		}
	}
	virtual ~Wine()
	{

	}
};
