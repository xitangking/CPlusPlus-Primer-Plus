#pragma once

struct Person
{
	char sName[20];
	int nAge;
};

typedef Person Item;
typedef void func(Item &);

class List
{
	static const int LIMIT = 10;
	Item m_Data[LIMIT];
	int m_nCount;
public:

	List();

	bool IsEmpty();

	bool IsFull();

	void Add(Item & item);

	void Visit(void(*func)(Item &));

	~List();
};

