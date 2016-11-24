#pragma once


#include<iostream>

using namespace std;

class Port
{
private:
	char * brand;
	char style[20];
	int bottles;
public:
	Port(const char * br = "none", const char * st = "none", int b = 0)
	{
		brand = new char[strlen(br) + 1];
		strcpy(brand, br);
		strcpy(style, st);
		bottles = b;
	}
	Port(const Port & p)
	{
		brand = new char[strlen(p.brand)];
		strcpy(brand, p.brand);
		strcpy(style, p.style);
		bottles = p.bottles;
	}
	virtual ~Port() { delete[] brand; }
	Port & operator=(const Port & p)
	{
		if (this == &p)
			return *this;
		delete[] brand;
		brand = new char[strlen(p.brand)];
		strcpy(brand, p.brand);
		strcpy(style, p.style);
		bottles = p.bottles;
	}
	Port & operator+=(int b)
	{
		this->bottles += b;
		return *this;
	}
	Port & operator-=(int b)
	{
		this->bottles -= b;
		return *this;
	}
	int BottleCount() const { return bottles; }
	virtual void Show() const
	{
		cout << "Brand: " << brand << endl;
		cout << "Kind: " << style << endl;
		cout << "Bottles: " << bottles << endl;
	}
	friend ostream & operator<<(ostream & os, const Port & p)
	{
		os << p.bottles << ", " << p.style << ", " << p.bottles;
		return os;
	}

};


class VintagePort:public Port
{
private:
	char * nickname;
	int year;
public:
	VintagePort():Port()
	{
		nickname = new char[1];
		strcpy(nickname, "");
		year = 0;
	}
	VintagePort(const char * br,char * st,int b, const char * nn, int y):Port(br,st,b)
	{ 
		nickname = new char[1];
		strcpy(nickname, "");
		year = y;
	}
	VintagePort(const VintagePort & vp) :Port(vp)
	{
		nickname = new char[strlen(vp.nickname) + 1];
		strcpy(nickname, vp.nickname);
		year = vp.year;
	}
	~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp)
	{
		if (this == &vp)
			return *this;
		Port::operator=(vp);
		delete[] nickname;
		nickname = new char[strlen(vp.nickname)];
		strcpy(nickname,vp.nickname);
		year = vp.year;
		return *this;
	}
	void Show() const
	{
		Port::Show();
		cout << "Nickname: " << nickname << endl;
		cout << "Year: " << year << endl;
	}
	friend ostream & operator<<(ostream & os, const VintagePort & vp)
	{
		os << ((const Port &)vp) << ", " << vp.nickname << ", " << vp.year;
	}
};
