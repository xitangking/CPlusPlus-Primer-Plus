//our func.cpp--define your function    xtw   2016.6.23
#include<iostream>
void simon(int);
int main5()
{
	using namespace std;
	simon(3);
	cout << "Pick on integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	cin.get();
	cin.get();
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "simon says touch you toes " <<
		n << " times." << endl;
}