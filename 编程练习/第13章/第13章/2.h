#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//base class
class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x)
	{
		performers = new char[strlen(s1) + 1];
		label = new char[strlen(s2) + 1];
		strcpy(performers, s1);
		strcpy(label, s2);
		selections = n;
		playtime = x;
	}
	Cd(const Cd & d)
	{
		performers = new char[strlen(d.performers) + 1];
		label = new char[strlen(d.label) + 1];
		strcpy(performers, d.performers);
		strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
	}
	Cd():selections(0),playtime(0.0)
	{
		performers = new char[1];
		label = new char[1];
		strcpy(performers, "");
		strcpy(label, "");
	}
	virtual ~Cd()
	{
		delete[] performers;
		delete[] label;
	}
	virtual void Report() const
	{
		cout << "Performers: " << performers << endl;
		cout << "Labal: " << label << endl;
		cout << "selections: " << selections << endl;
		cout << "Playtime: " << playtime << endl;
	}
	Cd & operator=(const Cd & d)
	{
		if (this == &d)
			return *this;
		delete[] performers;
		delete[] label;
		performers = new char[strlen(d.performers) + 1];
		label = new char[strlen(d.label) + 1];
		strcpy(performers, d.performers);
		strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
		return *this;
	}
};

class Classic:public Cd
{
	char * MajorWorks;
public:
	Classic(char * s1, char * s2, int n, double x,char * s3):Cd(s1,s2,n,x)
	{
		MajorWorks = new char[strlen(s3) + 1];
		strcpy(MajorWorks, s3);
	}
	Classic(const Classic & c):Cd(c)
	{
		MajorWorks = new char[strlen(c.MajorWorks) + 1];
		strcpy(MajorWorks, c.MajorWorks);
	}
	Classic():Cd("","",0,0.0)
	{
		MajorWorks = new char[1];
		strcpy(MajorWorks, "");
	}
	void Report() const
	{
		Cd::Report();
		cout << "MajorWorks: " << MajorWorks << endl;
	}
	Classic & operator=(const Classic & c)
	{
		if (this == &c)
			return *this;
		Cd::operator=(c);
		delete[] MajorWorks;
		MajorWorks = new char[strlen(c.MajorWorks) + 1];
		strcpy(MajorWorks, c.MajorWorks);
		return *this;
	}
	virtual ~Classic()
	{
		delete[] MajorWorks;
	}
};