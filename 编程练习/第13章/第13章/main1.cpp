#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"1.h"

void Bravo(const Cd & disk);

int main1()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat,Fantasia in C", "Alfred Brendel", 2, 57.17, "Philips");

	Cd *pcd = &c1;

	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment: \n";
	Classic copy;
	copy = c2;
	copy.Report();
	system("pause");
	return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}