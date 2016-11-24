//耗油量计算（风格变换）   西唐王   June 27,2016   Mon

#include<iostream>

int main7()
{
	using namespace std;
	cout << "请输入驱车里程：______公里\b\b\b\b\b\b\b\b\b\b";
	double kilometer;
	cin >> kilometer;
	cout << "请输入使用汽油量：______升\b\b\b\b\b\b\b\b";
	double litre;
	cin >> litre;
	double mile = kilometer*0.6214;
	double gallon = litre / 3.875;
	double mileage = mile / gallon;
	cout << "耗油量为：" << mileage << " mpg" << endl;
	cin.get();
	cin.get();
	return 0;
}