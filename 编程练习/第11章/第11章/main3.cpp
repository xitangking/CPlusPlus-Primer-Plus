//randwalk.cpp--using the Vector class
//compile with the vect.vpp file
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<climits>
#include"Vector2.h"

int main3()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0,0);
	unsigned long steps=0;
	double target;
	double dstep;
	double maxtarget = 0;
	double mintarget = 0;
	double sumtarget = 0;
	int count;
	cout << "亲输入要测试的次数：" << endl;
	cin >> count;
	cout<<"Enter target distance (q to quit):";
	cin >> target;
	cout << "Enter step length:";
	cin >> dstep;
	while (result.magval()<target)
	{
		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
		steps++;
	}
	maxtarget = steps;
	mintarget = steps;
	sumtarget += steps;
	steps = 0;
	result.reset(0, 0);
	for (int i = 0; i < count - 1; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		if (steps > maxtarget)
			maxtarget = steps;
		if (steps < mintarget)
			mintarget = steps;
		sumtarget += steps;
		steps = 0;
		result.reset(0, 0);
	}
	cout << "Max:" << maxtarget << " Min:" << mintarget << " Average:" << sumtarget / count << endl;
		
		
	cout<<"Bye!\n";
	system("pause");
	cin.clear();
	while(cin.get()!='\n')
		continue;

	return 0;
}
