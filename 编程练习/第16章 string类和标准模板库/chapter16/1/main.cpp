#include<iostream>
#include<string>

using namespace std;


//�ж���ĸ�������Ƿ��ǻ���
bool IsPalindrome1(const string & s)
{
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[s.length() - (i+1)])
			return false;
	}
	return true;
}


//�жϺ����Ƿ����
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
	cout << "����������ַ�����";
	string s;
	cin >> s;
	cout << "��������ַ���";
	if (!IsPalindrome2(s))
		cout << "��";
	cout << "�ǻ�����" << endl;
	system("pause");
	return 0;
}