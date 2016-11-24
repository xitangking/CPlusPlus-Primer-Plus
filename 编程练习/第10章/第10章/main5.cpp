#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
#include<iostream>
using namespace std;



int main5()
{
	Stack stack;
	customer ct;
	double count = 0;
	strcpy(ct.fullname, "a");
	ct.payment = 10;
	stack.push(ct);
	stack.push(ct);
	stack.push(ct);
	stack.push(ct);
	stack.push(ct);
	stack.push(ct);
	stack.push(ct);
	while (!stack.isempty())
	{
		stack.pop(ct);
		count += ct.payment;
		cout << ct.fullname << "±»µ¯³ö" << endl;
	}
	cout << "count = " << count << endl;
	system("pause");
	return 0;
}