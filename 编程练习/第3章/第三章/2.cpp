//����BMI������ָ����   ������   June 27,2016   Mon

#include<iostream>

void BMI(double inches, double foot, double pound);

int main2()
{
	using namespace std;
	double inches, foot, pound;
	cout << "��������ߣ�\nӢ��:";
	cin >> inches;
	cout << "Ӣ��:";
	cin >> foot;
	cout << "���������أ�����:";
	cin >> pound;
	BMI(inches, foot, pound);
	return 0;
}

void BMI(double inches, double foot, double pound)
{
	using namespace std;
	const double in_to_me = 0.254;
	const double pou_to_kg = 2.2;
	inches = inches + foot * 12;
	cout << "�������Ϊ��" << inches << "Ӣ�硣\n";
	double meter = inches*in_to_me;
	double kilogram = pound / pou_to_kg;
	double bmi = kilogram / (meter*meter);
	cout << "����BMIΪ��" << bmi << endl;
	cin.get();
	cin.get();
}


