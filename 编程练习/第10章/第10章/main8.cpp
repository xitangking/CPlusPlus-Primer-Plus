#include"List.h"
#include<iostream>

using namespace std;



void Print(Item & item)
{
	cout << "*****-----------------*****" << endl;
	cout << "ÐÕÃû£º" << item.sName << endl;
	cout << "ÄêÁä" << item.nAge << endl;
}

int main8()
{
	List list;
	Item item{ "xtw",19 };
	while(!list.IsFull())
	{
		list.Add(item);
	}
	list.Visit(Print);
	system("pause");
	return 0;
}