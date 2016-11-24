//randwalk.cpp--using the Vector class
//compile with the vect.vpp file
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include"Vector1.h"

using namespace std;

int main1()
{
	ofstream file;
	file.open("randwalk.txt");
	if (!file.is_open())
	{
		cout << "文件创建失败！" << endl;
		system("pause");
		return 0;
	}
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		file << "Target Distance ：" << target << ",Step Size:" << dstep << endl;
		while (result.magval()<target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			file << steps << ":(x,y) = (" << result.xval() << "," << result.yval() << ")" << endl;

		}
		cout << "After " << steps << " steps,the subject has the following location:\n";
		cout << result << endl;
		file << "After " << steps << " steps,the subject has the following location:\n";
		file << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		file << "or\n" << result << endl;
		file << "Average outward distance per step = " << result.magval() / steps << endl << endl << endl;
		steps = 0;
		result.reset(0, 0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	file.close();
	cin.clear();
	while (cin.get() != '\n')
	continue;

	return 0;
}
