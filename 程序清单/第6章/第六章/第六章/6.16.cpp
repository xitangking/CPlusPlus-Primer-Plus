//sumafile.cpp--function with an array argument   xtw   July 4,2016   Mon
#include<iostream>
#include<fstream>			//file I/O support
#include<cstdlib>			//support for exit()
const int SIZE = 60;

int main16()
{
	using namespace std;

	char filename[SIZE];
	ifstream fin;				//object for handing file input
	cout << "Enter your filename:";
	cin.getline(filename, 60);
	fin.open(filename);			//association fin with a file
	if (!fin.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating." << endl;
		cin.get();
		cin.get();
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;			 //number of items read

	fin >> value;
	while (fin.good())		 //while input good and not at EOF
	{
		++count;
		sum += value;
		fin >> value;
	}
	if (fin.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (fin.fail())
	{
		cout << "Input terminated by data mismatch\n";
	}
	else
	{
		cout << "Input terminated for unknow reason.\n";
	}
	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	fin.close();
	cin.get();
	cin.get();
	return 0;
}