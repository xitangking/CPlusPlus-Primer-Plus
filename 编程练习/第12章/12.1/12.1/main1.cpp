#include<iostream>
#include"Cow.h"

int main1()
{
	Cow cow1("xtw", "w", 50.0);
	Cow cow2 = { "yzh","h",65 };
	Cow cow3;
	cow3 = cow1;
	cow1.ShowCow();
	cow2.ShowCow();
	cow3.ShowCow();
	system("pause");

	return 0;
}