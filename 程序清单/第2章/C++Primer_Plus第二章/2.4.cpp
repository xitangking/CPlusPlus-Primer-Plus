//sqrt.cpp using the sqrt() function    xtw 2016.6.23
#include<iostream>
#include<cmath>
int main4()
{
	using namespace std;
	int area;
	cout << "Enter the floor area,in square feet,of you home:";
	cin >> area;

	double result = sqrt(area);
	cout << "That's the equivalent of a square " 
		<< result<<" feet to the side."<<endl;
	cout << "How fascinating!" << endl;
	cin.get();
	cin.get();
	return 0;
}