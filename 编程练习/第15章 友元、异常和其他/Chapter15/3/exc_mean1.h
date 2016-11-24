#pragma once
#include<iostream>
#include<stdexcept>

class bad :std::logic_error
{
protected:
	double v1;
	double v2;
public:
	bad(double a, double b,const std::string & what_arg) :v1(a),v2(b),std::logic_error(what_arg) {  }
	virtual const char* what() = 0;
	~bad()
	{

	}
};

class bad_hmean :public bad
{
public:
	bad_hmean(double a = 0, double b = 0, const std::string& what_arg = "") :bad(a,b,what_arg) {  }
	void mesg();
	const char* what()
	{
		std::cout << "v1 = " << v1 << " ,v2 = " << v2 << std::endl;
		return "bad arguments to hmean() invalid arguments: a= -b\n";
	}
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "):" << " invalid arguments: a= -b\n";

}

class bad_gmean :public bad
{
public:
	bad_gmean(double a = 0, double b = 0, const std::string& what_arg = ""):bad(a,b,what_arg) {  }
	const char* mesg();
	const char* what()
	{
		std::cout << "v1 = " << v1 << " ,v2 = " << v2 << std::endl;
		return " bad arguments to gmean() gmean() arguments should be >= 0\n";
	}
};

inline const char* bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";
}