//acctabc.cpp -- bank account class methods
#include<iostream>
#include "acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;



Acctabc::Acctabc(const std::string & s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void Acctabc::Deposit(double amt)
{
	if (amt < 0)
		cout << "Negative deposit not allowed;deposit is cancelled.\n";
	else
		balance += amt;
}

void Acctabc::Withdraw(double amt)
{
	balance -= amt;
}

//protected methods for formatting
Acctabc::Formatting Acctabc::SetFormat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}

void Acctabc::Restore(Acctabc::Formatting & f) const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}

//Brass methods
void Brass::Withdraw(double amt)
{
	if (amt < 0)
		cout << "Withdrawal amount must be positive;withdrawal canceled.\n";
	else if (amt <= Balance())
		cout << "Withdrawal amount of $" << amt << " exceeds your balance.\nWithdrawal canceled";
}

void Brass::ViewAcct() const
{
	Formatting f = SetFormat();
	cout << "Brass Client: " << FullName() << endl;
	cout << "Account Number: " << AcctNum() << endl;
	cout << "Balance: $" << Balance() << endl;
	Restore(f);
}

//BrassPlus Methods
BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) :Acctabc(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) :Acctabc(ba)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::ViewAcct() const
{
	Formatting f = SetFormat();

	cout << "BrassPlus Client: " << FullName() << endl;
	cout << "Account Number: " << AcctNum() << endl;
	cout << "Balabce: $" << Balance() << endl;
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout.precision(3);
	cout << "Loan Rate: " << 100 * rate << "%\n";
	Restore(f);
}

void BrassPlus::Withdraw(double amt)
{
	Formatting f = SetFormat();

	double bal = Balance();
	if (amt <= bal)
		Acctabc::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance*(1.0*rate);
		cout << "Bank advance: $" << advance << endl;
		Deposit(advance);
		Acctabc::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded.Transaction cancelled.\n";
	Restore(f);
}