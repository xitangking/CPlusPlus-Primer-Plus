#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

struct CandyBar
{
	char sName[20];
	float fWeight;
	int nHeat;
};

void Set(CandyBar & can, char * name="Millennium Munch", float weight=2.85, int heat=350)
{
	can.fWeight = weight;
	can.nHeat = heat;
	strcpy(can.sName, name);
}

void Print(const CandyBar &can)
{
	cout << "名称:" << can.sName << "\t重量:" << can.fWeight << "\t热量:" << can.nHeat << endl;
}

int main2()
{
	CandyBar can1, can2, can3;
	Set(can1);
	Set(can2, "西唐王", 1.6, 600);
	Set(can3);
	Print(can1);
	Print(can2);
	Print(can3);
	getchar();
	return 0;
}