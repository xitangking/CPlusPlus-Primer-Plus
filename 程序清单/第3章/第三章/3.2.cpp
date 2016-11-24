//exceed.cpp--exceeding some integer limits
//xtw   2016.6.26

#include<iostream>
#define ZERO 0
#include<climits>
int main2()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited."<<endl;
	sam++;
	sue++;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now";
	sam--; sue--;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	cin.get();
	return 0;
}