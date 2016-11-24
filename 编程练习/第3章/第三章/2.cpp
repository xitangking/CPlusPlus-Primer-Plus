//计算BMI（体重指数）   西唐王   June 27,2016   Mon

#include<iostream>

void BMI(double inches, double foot, double pound);

int main2()
{
	using namespace std;
	double inches, foot, pound;
	cout << "请输入身高：\n英寸:";
	cin >> inches;
	cout << "英尺:";
	cin >> foot;
	cout << "请输入体重（磅）:";
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
	cout << "您的身高为：" << inches << "英寸。\n";
	double meter = inches*in_to_me;
	double kilogram = pound / pou_to_kg;
	double bmi = kilogram / (meter*meter);
	cout << "您的BMI为：" << bmi << endl;
	cin.get();
	cin.get();
}


