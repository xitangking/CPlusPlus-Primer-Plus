#include<iostream>
#include"Person.h"
#include<cstring>

using namespace std;
const int SIZE = 10;

int main()
{
	Person *man[SIZE];

	int ct = 0;
	for (ct = 0; ct < SIZE; ct++)
	{
		cout << "Enter the man category:\n" << "g:Gunlinger p:Pokerplayer b:BadDude q:quit" << endl;
		char chioce;
		cin >> chioce;
		while (strchr("gpbq", chioce) == nullptr)
		{
			cout << "Please enter a g,p,b,q : ";
			cin >> chioce;
		}
		if (chioce == 'q')
			break;
		switch (chioce)
		{
		case 'g':	man[ct] = new Gunslinger;
			break;
		case 'p':	man[ct] = new PokerPlayer;
			break;
		case 'b':	man[ct] = new BadDude;
			break;
		}
		cin.get();
		man[ct]->Set();
	}

	cout << "\nHere is your man:\n";
	int i;
	for (int i = 0; i < ct; i++)
	{
		cout << endl;
		man[i]->Show();
	}
	for ( i = 0; i < ct; i++)
		delete man[i];
	cout << "Bye!\n";
	system("pause");
	return 0;
}