//support.cpp--use external variable
//compile with external.cpp
#include<iostream>
extern double warming;//use warming from another file

//function prototypes
void updata(double dt);
void local();

using namespace std;

void updata(double dt)//modifies global variable
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local()//uses local variable
{
	double warming = 0.8;//new variable hides external one

	cout << "Local warming = " << warming << "degrees." << endl;
	//Access global variable with the scope resolution operator
	cout << "But global warming = " << ::warming << "degrees" << endl;
}