#include<iostream>
#include"Stack.h"

using namespace std;

int main4()
{
	Stack stack1;
	Stack stack2(8);

	while (!stack1.isfull())
	{
		stack1.push(100);
	}

	stack2 = stack1;
	Item i;
	while (!stack1.isempty())
	{
		stack1.pop(i);
		cout << i << endl; 
	}

	system("pause");
	return 0;
}