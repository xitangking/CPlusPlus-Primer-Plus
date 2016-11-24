//morechar.cpp--the type and type contrasted
//xtw   2016.6.26

#include<iostream>
#include<stdio.h>
int main6()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCLL code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch++;
	i = ch;
	cout << "The ASCLL code for " << ch << " is " << i << endl;

	//using the cout.put() member function to display c char
	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);
	//using cout.put() to dispaly a char constant
	cout.put('!');
	cout << endl << "Done" << endl;
	cin.get();
	cin.get();
	return 0;

}