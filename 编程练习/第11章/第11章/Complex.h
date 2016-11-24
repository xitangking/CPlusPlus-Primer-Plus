#pragma once
#include<iostream>

class Complex
{
	double real;
	double unrel;
public:
	Complex();

	Complex(double r,double u)
	{
		real = r;
		unrel = u;
	}

	Complex operator+(const Complex & right) const 
	{
		return Complex(real + right.real, unrel + right.unrel);
	}

	Complex operator-(const Complex & right) const 
	{
		return Complex(real - right.real, unrel - right.unrel);
	}

	Complex operator*(const Complex & right) const
	{
		return Complex(real*right.real - unrel*right.unrel, real*right.unrel + unrel*right.real);
	}
	
	friend Complex operator*(double n, const Complex & right)
	{
		return Complex(right.real*n, right.unrel*n);
	}

	friend std::ostream & operator<<(std::ostream & os, const Complex &c)
	{
		os << "( " << c.real << "," << c.unrel << "i )" << std::endl;
		return os;
	}

	friend std::istream & operator >> (std::istream & is, Complex & c)
	{
		std::cout << "请输入实数部分：";
		is >> c.real;
		std::cout << "请输入虚数部分：";
		is >> c.unrel;
		return is;
	}

	friend Complex operator~(Complex & c)
	{
		return Complex(c.real, -1 * c.unrel);
	}
	~Complex();
};

