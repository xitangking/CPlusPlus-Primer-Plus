#define _CRT_SECURE_NO_WARNINGS
#include "Sales.h"
#include<iostream>

using namespace std;


SALES::Sales::Sales(const double ar[], int n)
{
	max = min = ar[0];
	int count = 0;
	int i = 0;
	while (i < QUARTERS)
	{
		if (ar[i] > max)
			max = ar[i];
		if (ar[i] < min)
			min = ar[i];
		sales[i] = ar[i];
		count += ar[i];
		++i;
	}
	average = count / QUARTERS;
}

SALES::Sales::Sales()
{
}


SALES::Sales::~Sales()
{
}

void SALES::Sales::showSales()
{
	cout << "***********************" << endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << " " << sales[i];
	}
	cout << endl;
	cout << "average:" << average << endl;
	cout << "max:" << max << endl;
	cout << "min:" << min << endl;
}

void SALES::Sales::setSales()
{
	int count = 0;
	int i = 0;
	cout << "请输入四个数：" << endl;
	while (i < QUARTERS)
	{
		cin >> sales[i];
		if (i == 0)
			max = min = sales[i];
		if (sales[i] > max)
			max = sales[i];
		if (sales[i] < min)
			min = sales[i];

		count += sales[i];
		++i;
	}
	average = count / QUARTERS;
}
