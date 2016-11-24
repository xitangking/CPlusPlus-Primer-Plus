#include"BankAccount.h"
#include<iostream>
using namespace std;

int main1()
{
	BankAccount account("xitangwang", "4399", 10000);
	account.Save(1000000);
	account.Print();
	account.Withdraw(1000);
	account.Print();
	system("pause");
	return 0;
}