//��߻���   ������   June 26,2016   Sun

#include<iostream>

int main1()
{
	using namespace std;
	cout << "���������Ϊ��������:___\b\b\b";
	int centimeter;
	cin >> centimeter;
	int meter;
	const int cen_per_met = 100;
	meter = centimeter / cen_per_met;
	centimeter = centimeter%cen_per_met;
	cout << "������Ϊ��" << meter << "��" << centimeter << "����" << endl;
	cin.get();
	cin.get();
	return 0;
}