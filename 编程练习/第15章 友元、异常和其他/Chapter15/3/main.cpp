//error4.cpp - using exception classes

#include<iostream>
#include<cmath>
#include"exc_mean1.h"

//function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			cout << "Geonmetric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
			cout << "Enter next set of number <q to quit>:";
		}
		catch (bad & hg)
		{
			cout << hg.what();
			cout << "Sorroy,you don't get to play any more.\n";
			break;
		}
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0*a*b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a*b);
}