//γ�Ȼ���   ������   June 27,2016   Mon

#include<iostream>

int main3()
{
	using namespace std;
	cout << "������γ��:\n___��\b\b\b\b\b" ;
	double degree;
	double minutes;
	double seconds;
	cin >> degree;
	cout << "\b";
	cout << "___��\b\b\b\b\b";
	cin >> minutes;
	cout << "___��\b\b\b\b\b";
	cin >> seconds;
	double degrees = degree + (seconds / 3600) + (minutes / 60);
	cout << degree << " ��," << minutes << " ��," << seconds << " �� = " << degrees << " ��." << endl;
	cin.get();
	cin.get();
	return 0;
}