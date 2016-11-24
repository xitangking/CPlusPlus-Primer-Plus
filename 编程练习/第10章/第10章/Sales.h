#pragma once

namespace SALES
{
	class Sales
	{
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[], int n);

		Sales();

		~Sales();

		void showSales();

		void setSales();
	};
}



