#pragma once
#include<iostream>
#include<string>

class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp() {  }
	abstr_emp(const std::string & fn, const std::string & ln, const std::string & j) :fname(fn), lname(ln), job(j) {  }
	virtual void ShowAll() const
	{
		std::cout << *this << endl;
	}
	virtual void SetAll()
	{
		std::cout << "Please enter the first name: ";
		std::cin >> fname;
		std::cout << "Please enter the last name: ";
		std::cin >> lname;
		std::cout << "Please enter the job: ";
		std::cin >> job;
	}
	friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
	{
		os << "Name: " << e.lname << " " << e.fname << endl;
		os << "Job: " << e.job << endl;
		return os;
	}
	virtual ~abstr_emp() {  }
};

class employee :public abstr_emp
{
public:
	employee() {  }
	employee(const std::string & fn, std::string ln, const std::string & j):
		abstr_emp(fn, ln, j) {   }
	virtual void ShowAll()
	{
		abstr_emp::ShowAll();
	}
	virtual void SetAll()
	{
		abstr_emp::SetAll();
	}

};

class manager :virtual public abstr_emp
{
private:
	int inchargeof;
protected:
	int Inchargeof() const { return inchargeof; }
	int & Inchargeof() { return inchargeof; }
public:
	manager() {  }
	manager(const std::string & fn,const std::string & ln, const std::string & j, int ico = 0):
		abstr_emp(fn, ln, j), inchargeof(ico) {  }
	manager(const abstr_emp & e, int ico) :abstr_emp(e), inchargeof(ico) {  }
	manager(const manager & m)
	{
		*this = m;
	}
	virtual void ShowAll() const
	{
		//abstr_emp::ShowAll();
		cout << "number of abstr_emp managed: " << inchargeof << endl;
	}
	virtual void SetAll()
	{
		abstr_emp::SetAll();
		cout << "Please enter the number of your managed: ";
		cin >> inchargeof;
	}

};

class fink :virtual public abstr_emp
{
private:
	std::string reportsto;
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string & ReportsTo() { return reportsto; }
public:
	fink() {  }
	fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string rpo):
		abstr_emp(fn,ln,j),reportsto(rpo) {  }
	fink(const abstr_emp & e, const std::string & rpo) :abstr_emp(e), reportsto(rpo) {  }
	fink(const fink & e)
	{
		*this = e;
	}
	virtual void ShowAll() const
	{
		//abstr_emp::ShowAll();
		cout << "whom fink reports: " << reportsto << endl;
	}
	virtual void SetAll()
	{
		abstr_emp::SetAll();
		cout << "Please enter whom fink reports: ";
		cin >> reportsto;
	}
};

class highfink :public manager, public fink//management fink
{
public:
	highfink() {  }
	highfink(const std::string & fn, std::string & ln, const std::string & j, const std::string & rpo, int ico) :
		abstr_emp(fn, ln, j)
	{
		ReportsTo() = rpo;
		Inchargeof() = ico;
	}
	highfink(const abstr_emp & e, const std::string rpo, int ico) :abstr_emp(e)
	{
		ReportsTo() = rpo;
		Inchargeof() = ico;
	}
	highfink(const fink & f, int ico):fink(f)
	{
		Inchargeof() = ico;
	}
	highfink(const manager & m, const std::string & rpo) :manager(m)
	{
		ReportsTo() = rpo;
	}
	highfink(const highfink & h)
	{
		*this = h;
	}
	virtual void ShowAll() const
	{
		manager::ShowAll();
		fink::ShowAll();
	}
	virtual void SetAll()
	{
		manager::SetAll();
		cout << "Please enter whom fink reports: ";
		cin >> fink::ReportsTo();
	}
};
