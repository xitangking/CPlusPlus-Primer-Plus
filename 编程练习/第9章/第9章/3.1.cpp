#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<new>
using namespace std;

const int BUF = 512;
//第一种方法
char buf1[BUF];

//第二种方法
char *buf2 = new char[BUF];

struct chaff
{
	char dross[20];
	int slag;
};

int main3()
{
	//定位运算new

	chaff* s1;
	s1 = new (buf1)chaff[2];
	chaff* s2 = new (buf2)chaff[2];
	

	s1[0].slag = 100;
	strcpy(s1[0].dross, "Hello");
	s1[1].slag = 100;
	strcpy(s1[1].dross, "World");
	for (int i = 0; i < 2; i++)
	{
		cout << s1[i].slag << "  " << s1[i].dross << endl;
	}
	system("pause");
	return 0;
}