#include "Stack.h"
#include<memory>

Stack::Stack(int n)
{
	size = n;
	top = 0;
	pitems = new Item[n];
}

Stack::Stack(const Stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	memcpy(pitems, st.pitems, top);
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item & item)
{
	if (isfull())
		return false;
	pitems[top] = item;
	++top;
	return true;
}

bool Stack::pop(Item & item)
{
	if (isempty())
		return false;
	item = pitems[top];
	--top;
	return true;
}

Stack & Stack::operator=(const Stack & st)
{
	// TODO: 在此处插入 return 语句
	size = st.size;
	top = st.top;
	delete[] pitems;
	pitems = new Item[size];
	memcpy(pitems, st.pitems, top);
	return *this;
}
