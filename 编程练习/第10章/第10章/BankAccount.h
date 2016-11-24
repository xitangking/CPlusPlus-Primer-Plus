#pragma once


class BankAccount
{
	char m_sName[20];
	char m_sAccount[20];
	double m_dFund;
public:
	BankAccount();
	
	BankAccount(char * name, char * account, double fund = 0);

	void Print() const;

	void Save(double num);

	void Withdraw(double num);

	~BankAccount();
};

