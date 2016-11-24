#include<iostream>

int main1()
{
	int i = 10;
	int a = i;

	printf("i=%d\n", a);

	_asm {
		mov dword ptr [ebp-4],20h
	}

	int b = i;

	printf("i=%d\n", b);

	system("pause");

	return 0;
}