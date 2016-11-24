#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;


string Upper(string &str)
{
	transform(str.begin(), str.end(), str.begin(), toupper);
	return str;
}


int main3()
{
	
	string str;
	cout << "Enter a string (q to quit):";
	cin >> str;
	while (str!="q") 
	{
		cout << Upper(str) << endl;
		cout << "Next string (q to quit):";
		cin >> str;
	}
	return 0;
}


