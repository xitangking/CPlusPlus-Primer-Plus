#include<iostream>

using namespace std;

void Print(char *str, int i = 0);

int main1()
{
	Print("西唐王");
	Print("中国", 9);
	getchar();
	return 0;
}
void Print(char *str, int i)
{
	if (i == 0)
	{
		cout << str << endl;
	}
	else
	{
		for (int n = 0; n < i; ++n)
		{
			cout << str << endl;
		}
	}
}