#pragma once


class Plorg
{
private:
	char m_sName[20];
	int m_nCI;
public:

	Plorg(int ic = 50, char * name = "Plorg");

	void SetCI(int ci);

	void Print() const;

	~Plorg();
};

