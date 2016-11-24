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
	cout << "����������ַ�����";
	char str[1024];
	cin.getline(str, 1024);
	cout << "��������ַ���";
	if (!IsPalindrome(str))
		cout << "��";
	cout << "�ǻ�����" << endl;
	system("pause");
	return 0;
}