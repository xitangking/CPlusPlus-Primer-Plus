//studenti.cpp -- Student class using private inheritance

#include"14.4.h"
using std::string;
using std::cout;
using std::cin;
using std::ostream;
using std::istream;
using std::endl;

double Student::Average() const
{
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}

const string & Student::Name() const
{
	return (const string &)*this;
}

double & Student::operator[](int i)
{
	return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
	return ArrayDb::operator[](i);
}

//private method

ostream & Student::arr_out(ostream & os) const
{
	int i;
	int lim = ArrayDb::size();
	if (lim > 0)
	{
		for (int i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << "empty array ";
	return os;
}

//friend
istream & operator >> (istream & is, Student & stu)
{
	is >> (string &)stu;
	return is;
}

istream & getline(istream & is, Student & stu)
{
	getline(is, (string&)stu);//通过强制转换来调用父类
	return is;
}

ostream & operator<<(ostream & os, const Student & stu)
{
	os << "Scores for " << (const string &)stu << ":\n";
	stu.arr_out(os);
	return os;
}
