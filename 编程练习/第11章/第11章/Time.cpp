#include "Time.h"



Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}


Time::~Time()
{
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time & left, const Time & right)
{
	Time sum;
	sum.minutes = left.minutes + right.minutes;
	sum.hours = left.hours + right.hours;
	return sum;
}

Time operator-(const Time & left, const Time & right)
{
	Time diff;
	diff.minutes = left.minutes - right.minutes;
	diff.hours = left.hours - right.hours;
	return diff;
}

Time operator*(double mult, const Time & t)
{
	Time result;
	long totalminutes = t.hours*mult * 60 + t.minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
