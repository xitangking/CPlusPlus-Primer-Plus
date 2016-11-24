#include"QueueTp.h"
#include"workermi.h"
#include<iostream>

const int SIZE = 10;

using namespace std;

int main()
{
	QueueTp<Worker*, SIZE> queue;

	for (int ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter your employee category:\n" << "w: waiter s:singer t: singingwaiter q:quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == nullptr)
		{
			cout << "Please enter a w,s,t,q:";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		Worker *worker = nullptr;
		switch (choice)
		{
		case 'w':worker = new Waiter;
			break;
		case 's':worker = new Singer;
			break;
		case 't':worker = new SingingWaiter;
			break;
		}
		cin.get();
		worker->Set();
		queue.Push(worker);
	}
	Worker *worker;
	cout << "Here your staff:\n";
	while (!queue.Isempty())
	{
		queue.Pop(worker);
		worker->Show();
		delete worker;
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}