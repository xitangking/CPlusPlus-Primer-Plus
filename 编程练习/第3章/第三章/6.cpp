//计算耗油量   西唐王   June 27,2016   Mon

#include<iostream>

int main6()
{
	using namespace std;
	cout << "请输入驱车里程：______公里\b\b\b\b\b\b\b\b\b\b";
	double kilometer;
	cin >> kilometer;
	cout << "请输入使用汽油量：______升\b\b\b\b\b\b\b\b";
	double litre;
	cin >> litre;
	double consumpetion = litre / kilometer;

	cout << "每百公里耗油量为：" << consumpetion * 100 << "(升)" << endl;
	cin.get();
	cin.get();
	return 0;
}