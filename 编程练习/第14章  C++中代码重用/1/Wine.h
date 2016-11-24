#pragma once
#include<iostream>
#include"pairs.h"
#include<valarray>

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
	std::string m_sName;
	PairArray m_Pair;
	int m_nYears;
public:
	Wine() :m_sName("none"), m_nYears(0), m_Pair(ArrayInt(), ArrayInt()) {  }
	Wine(const char * l, int y, const int yr[], const int bot[]):m_sName(l),m_nYears(y),m_Pair(ArrayInt(yr,y),ArrayInt(bot,y))
	{
	}
	Wine(const char * l, int y):m_Pair(ArrayInt(y),ArrayInt(y))
	{
		m_sName = l;
		m_nYears = y;
	}
	void GetBottles()
	{
		std::cout << "Enter " << m_sName << " data for " << m_nYears << " years" << std::endl;
		for (int i = 0; i < m_nYears; i++)
		{
			std::cout << "Enter years: ";
			std::cin >> m_Pair.first()[i];
			std::cout << "Enter bottles for that years: ";
			std::cin >> m_Pair.second()[i];
		}
	}
	std::string & Label()
	{
		return m_sName;
	}
	int sum()
	{
		return m_Pair.second().sum();
	}
	void Show()
	{
		std::cout << "Wine: " << m_sName << std::endl;
		std::cout << "Years\t\tBottles" << std::endl;
		ArrayInt a = m_Pair.first();
		ArrayInt b = m_Pair.second();
		for (int i = 0; i < m_nYears; i++)
		{
			std::cout << a[i] << "\t\t" << b[i] << std::endl;
		}
	}
	~Wine()
	{

	}
};

