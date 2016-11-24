#include "4.h"
#include<iostream>
using namespace std;


void SALES::setSales(Sales & s, const double ar[], int n)
{
	s.max = s.min = ar[0];
	int count = 0;
	int i = 0;
	while (i < QUARTERS)
	{
		if (ar[i] > s.max)
			s.max = ar[i];
		if (ar[i] < s.min)
			s.min = ar[i];
		s.sales[i] = ar[i];
		count += ar[i];
		++i;
	}
	s.average = count / QUARTERS;
}

void SALES::setSales(Sales & s)
{
	int count = 0;
	int i = 0;
	cout << "请输入四个数：" << endl;
	while (i < QUARTERS)
	{
		cin >> s.sales[i];
		if (i == 0)
			s.max = s.min = s.sales[i];
		if (s.sales[i] > s.max)
			s.max = s.sales[i];
		if (s.sales[i] < s.min)
			s.min = s.sales[i];
		
		count += s.sales[i];
		++i;
	}
	s.average = count / QUARTERS;
}

void SALES::showSales(const Sales & s)
{
	cout << "***********************" << endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout <<" " << s.sales[i];
	}
	cout << endl;
	cout << "average:" << s.average << endl;
	cout << "max:" << s.max << endl;
	cout << "min:" << s.min << endl;
}
