#include<iostream>
#include"Move.h"

using namespace std;

int main6()
{
	Move move1, move2(3,4);

	move1.showMove();
	move2.showMove();

	Move move3 = move1.add(move2);
	move3.showMove();

	move1.reset(100, 100);
	move1.showMove();

	system("pause");
	return 0;
}