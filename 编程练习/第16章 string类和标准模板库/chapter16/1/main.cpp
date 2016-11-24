#include<iostream>
#include<string>

using namespace std;


//判断字母和数字是否是回文
bool IsPalindrome1(const string & s)
{
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[s.length() - (i+1)])
			return false;
	}
	return true;
}


//判断汉字是否回文
bool IsPalindrome2(const string & s)
{
	for (int i = 0; i < s.length(); i+=2)
	{
		if (s[i] != s[s.length() - (i + 2)] || s[i + 1] != s[s.length() - (i + 1)])
			return false;
	}
	return true;
}

int main()
{
	cout << "请输入你的字符串：";
	string s;
	cin >> s;
	cout << "你输入的字符串";
	if (!IsPalindrome2(s))
		cout << "不";
	cout << "是回文数" << endl;
	system("pause");
	return 0;
}