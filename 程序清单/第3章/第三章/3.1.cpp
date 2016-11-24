//limits.cpp--some integer limits
//xtw   2016.6.25  
#include<iostream>
#include<climits>
int main1()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;
	cout << endl;
	cout << "Maximum values:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short:" << n_short << endl;
	cout << "long:" << n_long << endl;
	cout << "long long:" << n_llong << endl << endl;

	cout << "Minimum int values = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	cin.get();

	return 0;
}