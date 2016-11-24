#pragma once
class Cow
{
	char name[20];
	char  hobby[20];
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow &c);
	Cow & operator=(const Cow & c);
	void ShowCow() const;
	~Cow();
};

