#include "Move.h"
#include<iostream>

using namespace std;

Move::Move(double a, double b):x(a),y(b)
{
}

void Move::showMove() const
{
	cout << "(" << x << "," << y << ")" << endl;
}

Move Move::add(const Move & m) const
{
	return Move(x + m.x, y + m.y);
}

Move& Move::reset(double a, double b)
{
	x = a;
	y = b;
	return *this;
}

Move::~Move()
{
}
