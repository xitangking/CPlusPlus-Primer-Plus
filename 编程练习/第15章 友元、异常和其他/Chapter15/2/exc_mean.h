#pragma once
#include<iostream>
#include<stdexcept>

class bad_hmean:std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0, const std::string& what_arg="") :v1(a), v2(b),std::logic_error(what_arg) {  }
	void mesg();
	const char* what()
	{
		return "bad arguments to hmean() invalid arguments: a= -b\n";
	}
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "):" << " invalid arguments: a= -b\n";

}

class bad_gmean:std::logic_error
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0,const std::string& what_arg="") :v1(a), v2(b),std::logic_error(what_arg) {  }
	const char* mesg();
	const char* what()
	{
		return "bad arguments to gmean() gmean() arguments should be >= 0\n";
	}
};

inline const char* bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";
}