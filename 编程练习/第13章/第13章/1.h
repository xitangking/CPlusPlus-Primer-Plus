#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//base class
class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x)
	{
		strcpy(performers, s1);
		strcpy(label, s2);
		selections = n;
		playtime = x;
	}
	Cd(const Cd & d)
	{
		*this = d;
	}
	Cd():performers(""),label(""),selections(0),playtime(0.0)
	{

	}
	virtual ~Cd()
	{

	}
	virtual void Report() const
	{
		cout << "Performers: " << performers << endl;
		cout << "Labal: " << label << endl;
		cout << "selections: " << selections << endl;
		cout << "Playtime: " << playtime << endl;
	}
	//Cd & operator=(const Cd & d);
};

class Classic:public Cd
{
	char MajorWorks[20];
public:
	Classic(char * s1, char * s2, int n, double x,char * s3):Cd(s1,s2,n,x)
	{
		strcpy(MajorWorks, s3);
	}
	Classic(const Classic & c):Cd(c)
	{
		strcpy(MajorWorks, c.MajorWorks);
	}
	Classic():Cd("","",0,0.0),MajorWorks("")
	{

	}
	void Report() const
	{
		Cd::Report();
		cout << "MajorWorks: " << MajorWorks << endl;
	}
};