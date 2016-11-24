#include<iostream>
#include"Person.h"

using namespace std;

int main2()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	two.Show();
	cout << endl;
	two.FormalShow();
	three.Show();
	cout << endl;
	three.FormalShow();
	system("pause");
	return 0;
}