#include<cctype>
#include<string>
#include<iostream>

using namespace std;

bool IsPalindrome(const string & s)
{
	string str = s;
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
		if (!isalnum(str[i]))
		{
			str=str.erase(i,1);
			i--;
		}
	}
	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - (i + 1)])
			return false;
	}
	return true;
}

int main()
{
	cout << "请输入你的字符串：";
	char str[1024];
	cin.getline(str, 1024);
	cout << "你输入的字符串";
	if (!IsPalindrome(str))
		cout << "不";
	cout << "是回文数" << endl;
	system("pause");
	return 0;
}