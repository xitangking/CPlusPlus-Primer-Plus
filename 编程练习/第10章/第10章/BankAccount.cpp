#define _CRT_SECURE_NO_WARNINGS
#include "BankAccount.h"
#include<iostream>

using namespace std;


BankAccount::BankAccount()
{
	m_dFund = 0;
	strcpy(m_sName, "none");
	strcpy(m_sAccount, "none");
}

BankAccount::BankAccount(char * name, char * account, double fund)
{
	m_dFund = fund;
	strcpy(m_sAccount, account);
	strcpy(m_sName, name);
}


void BankAccount::Print() const
{
	cout << "�ͻ�����" << m_sName << endl;
	cout << "�˺ţ�" << m_sAccount << endl;
	cout << "��" << m_dFund << endl;
}

void BankAccount::Save(double num)
{
	m_dFund += num;
}

void BankAccount::Withdraw(double num)
{
	m_dFund -= num;
}

BankAccount::~BankAccount()
{
}
