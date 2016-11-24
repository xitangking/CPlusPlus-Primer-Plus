
#include "1.golf.h"
#include<iostream>

using namespace std;
int main1()
{
	golf Golf[10];
	int i = 0;
	for (i = 0;i < 10 && setgolf(Golf[i]); ++i);
	i = 0;
	while (Golf[i].fullname != NULL)
	{
		showgolf(Golf[i]);
		++i;
	}
	cin.get(); 
	return 0;
}