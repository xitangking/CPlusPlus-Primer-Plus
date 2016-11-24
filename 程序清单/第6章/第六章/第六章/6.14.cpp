//cingolf.cpp--non-numeric input skipped   xtw   July 4,2016
#include<iostream>
const int MAX = 5;
int main14()
{
	using namespace std;
	//get data
	int golf[MAX];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << MAX << " rounds." << endl;
	int i;
	for (i = 0; i < MAX; i++)
	{
		cout << "round #" << i + 1 << ":";
		while (!(cin >> golf[i]))
		{
			cin.clear();    //reset input
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number:";
		}
	}
	//calculate average
	double total = 0;
	for (int i = 0; i < MAX; i++)
	{
		total += golf[i];
	}
	//report result
	cout << total / MAX << " = average rounds" << endl;
	cin.get();
	cin.get();
	return 0;
}