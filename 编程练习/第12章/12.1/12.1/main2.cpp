//pe12_2.cpp
#include<iostream>
#include"String1.h"

using namespace std;

int main2()
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;
	cin >> s3;
	s2 = "My name is" + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.StringUpper();
	cout << "The string \n" << s2 << "\ncontains " << s2.SearchChar('A') << " 'A' characters in it.\n";
	s1 = "red";
	String rgb[3] = { String(s1),String("green"),String("blue") };
	cout << "Enter the name of a primary color for mixing light:";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.StringLow();
		for (int i = 0;i < 3;++i)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye!\n";

	return 0;
}