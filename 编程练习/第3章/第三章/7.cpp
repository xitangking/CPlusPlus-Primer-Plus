//���������㣨���任��   ������   June 27,2016   Mon

#include<iostream>

int main7()
{
	using namespace std;
	cout << "������������̣�______����\b\b\b\b\b\b\b\b\b\b";
	double kilometer;
	cin >> kilometer;
	cout << "������ʹ����������______��\b\b\b\b\b\b\b\b";
	double litre;
	cin >> litre;
	double mile = kilometer*0.6214;
	double gallon = litre / 3.875;
	double mileage = mile / gallon;
	cout << "������Ϊ��" << mileage << " mpg" << endl;
	cin.get();
	cin.get();
	return 0;
}