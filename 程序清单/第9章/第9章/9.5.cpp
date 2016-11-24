//external.cpp--external variables
//compile with support.cpp
#include<iostream>

using namespace std;

//external variable
double warming = 0.3;
//function prototypes
void updata(double dt);
void local();

int main5()
{
	cout << "Global warming is " << warming << " degrees.\n";
	updata(0.1);
	cout << "Global warming is " << warming << " degrees.\n";
	local();
	cout << "Global warming is " << warming << " degrees.\n";
	cin.get();
	return 0;
}