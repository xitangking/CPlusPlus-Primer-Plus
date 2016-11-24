//towfiles2.cpp--variables with the internal and external linkage
#include<iostream>
extern int tom;             //tom defined elsewhere
static int dick = 10;       //overrides external dick
int harry = 200;            //external variables with twofile1 harry
//no conflict with twofile1 harry

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addarsses:\n" << &tom << " = &tom" << &dick << " = &dick" << &harry << " = &harry" << endl;
}
