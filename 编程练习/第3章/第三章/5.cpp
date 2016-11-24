//计算人口比例  西唐王   June 27,2016   Mon

#include<iostream>

int main5()
{
	using namespace std;
	cout << "请输入世界人口：";
	double world_pop;
	cin >> world_pop;
	cout << "请输入美国人口：";
	double us_pop;
	cin >> us_pop;
	double percent = us_pop / world_pop * 100;
	cout << "美国人口占 "<<percent << "% 的世界人口。" << endl;
	cin.get();
	cin.get();
	return 0;
}