#define _CRT_SECURE_NO_WARNINGS
//pe9-3.cpp -- using placement new
#include <iostream>
#include <new>
#include <cstring>
struct chaff
{
	char dross[20];
	int slag;
};

// char buffer[500]; // option 1
int main2()
{
	using std::cout;
	using std::endl;
	chaff *p1;
	int i;
	char * buffer = new char[500];  // option 2
	p1 = new (buffer) chaff[2];    // place structures in buffer
	std::strcpy(p1[0].dross, "Horse Feathers");
	p1[0].slag = 13;
	std::strcpy(p1[1].dross, "Piffle");
	p1[1].slag = -39;

	for (i = 0; i < 2; i++)
		cout << p1[i].dross << ": " << p1[i].slag << endl;
	delete[] buffer;  // option 2

	return 0;
}

