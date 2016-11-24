//string1.cpp--String class methods
#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<ctype.h>
#include"string1.h"
using std::cin;
using std::cout;

//initializing static class member

int String::num_strings=0;

//static methods
int String::HowMany()
{
    return num_strings;
}

//class methods
String::String(const char * s)
{
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    num_strings++;
}

String::String()
{
    len=0;
    str=new char[1];
    str[0]='\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len=st.len;
    str=new char[len+1];
    std::strcpy(str,st.str);
}

String::~String()
{
    --num_strings;
    delete[] str;
}

//overloaded operator methods

void String::StringLow()
{
	_strlwr(str);
}

void String::StringUpper()
{
	_strupr(str);
}

int String::SearchChar(const char c)
{
	int n = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			++n;
		++i;
	}
	return n;
}

String & String::operator=(const String st)
{
    if(this==&st)
        return *this;
    delete[] str;
    len=st.len;
    str=new char[len+1];
    std::strcpy(str,st.str);
    return *this;
}

String & String::operator=(const char * s)
{
    delete[] str;
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    return *this;
}

String  String::operator+(const String & s)
{
	// TODO: 在此处插入 return 语句
	String Str;
	Str.len = len + s.len;
	delete Str.str;
	Str.str = new char[Str.len + 1];
	strcpy(Str.str, str);
	strcat(Str.str, s.str);
	return Str;
}
String  String::operator+( char * s)
{
	// TODO: 在此处插入 return 语句
	String Str;
	Str.len = len + strlen(s);
	delete Str.str;
	Str.str = new char[Str.len + 1];
	strcpy(Str.str, str);
	strcat(Str.str, s);
	return Str;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

//overloaded operator friend

String operator+(char * strl,String & strr)
{
	int num = strlen(strl) + strr.len;
	String Str;
	delete Str.str;
	Str.str = new char[num + 1];
	Str.len = num;
	strcpy(Str.str, strl);
	strcat(Str.str, strr.str);
	return Str;
}

bool operator<(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str)<0);
}

bool operator>(const String &st1,const String &st2)
{
    return st2<st1;
}

bool operator==(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str)==0);
}

ostream & operator<<(ostream & os,const String & st)
{
    os<<st.str;
    return os;
}

istream & operator>>(istream & is,String & st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
        st=temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}