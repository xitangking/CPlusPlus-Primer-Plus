//stacker.cpp--testing the Stack class

#include "10.10.h"
#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout<<"Please enter A to add purchase order.\n"<<"p to process a PO, or Q to quit.\n";
	while (cin>>ch&&toupper(ch)!='Q')
	{
		while(cin.get()!='\n')
		continue;
		if(!isalpha(ch))
		{
			cout<<'\a';
			continue;
		}
		switch (ch)
		{
		default:
			break;
			case 'A':
			case 'a':
			cout<<"Enter a PO number to add:";
			cin>>po;
			if(st.isfull())
			{
				cout<<"stack already full\n";
			}
			else
			{
				st.push(po);
			}
			break;
			case 'P':
			case 'p':
			if(st.isfull())
			{
				cout<<"stack already full\n";
			}
			else
			{
				st.push(po);
			}
			break;
		}
		cout<<"Please enter A to add a puchase order,P to process a PO,or Q to quit."<<endl;

	}
	cout<<"Bye"<<endl;

	return 0;
}