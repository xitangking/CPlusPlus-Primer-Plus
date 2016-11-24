#include"Sales.h"
#include<iostream>
using namespace std;
int main4()
{
	using namespace SALES;
	Sales sales1;
	sales1.setSales();
	double ar[4] = { 1,2,3,4 };
	Sales sales2(ar, 0);
	sales1.showSales();
	sales2.showSales();
	system("pause");
	return 0;
}