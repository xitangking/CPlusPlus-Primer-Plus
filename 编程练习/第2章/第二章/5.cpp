//�¶�ת�������Ϻ����ϣ�--�в����з���ֵ�ĺ�������   ������   June 23,2016
 
#include<iostream>

double Change(double x)
{
	return x*1.8 + 32;
}
int main5()
{
	using namespace std;
	cout << "Please enter a Celsius value:";
	double Celsius;
	cin >> Celsius;
	double Fahrenheit;
	Fahrenheit = Change(Celsius);
	cout << Celsius << " degrees Celsius is "<< Fahrenheit << " degrees Fahrenheit."<<endl;
	cin.get();
	cin.get();
	return 0;
}
