//toefiles.cpp--variable with external and internal linkage

#include<iostream>   //to be compiled with tow files2.cpp
int tom = 3;         //external variable definition
int dick = 30;       //external variable definition
static int harry = 300;//internal linkage

//function prototypes
void remote_access();

int main7()
{
	using namespace std;
	cout << "main() reports the following addresses:\n" << &tom << " = &tom" << &dick << " = &dick" << &harry<< " = *harry" << endl;
	remote_access();
	cin.get();
	return 0;
}