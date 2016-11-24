//acctabc.h -- bank account classes
#pragma once
#include<iostream>
#include<string>

//Abstract Bass Class
class Acctabc
{
private:
	std::string fullName;
	long acctNum;
	double balance;
protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string & FullName() const { return fullName; }
	long AcctNum() const { return acctNum; }
	Formatting SetFormat() const;
	void Restore(Formatting & f) const;
public:
	Acctabc(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt) = 0;
	double Balance() const { return balance; }
	virtual void ViewAcct() const = 0;
	virtual ~Acctabc() {  };
};


//Brass Account Class
class Brass :public Acctabc
{
public:
	Brass (const std::string & s="Nullbody",long an=-1,double bal=0.0):Acctabc(s,an,bal) { }
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass() {  }
};


//Brass Plus Account Class
class BrassPlus:public Acctabc
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesBank = 0; }
};




