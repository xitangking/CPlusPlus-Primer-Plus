#include"4.h"
#include<iostream>
using namespace std;

int main()
{
	using namespace SALES;
	Sales sales1, sales2;
	setSales(sales1);
	double ar[4] = { 1,2,3,4 };
	setSales(sales2, ar, 0);
	showSales(sales1);
	showSales(sales2);
	system("pause");
	return 0;
}