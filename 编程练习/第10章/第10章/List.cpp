#include "List.h"



List::List()
{
	m_nCount = 0;
}

bool List::IsEmpty()
{
	return m_nCount == 0;
}

bool List::IsFull()
{
	return m_nCount == LIMIT;
}

void List::Add(Item & item)
{
	if (m_nCount < LIMIT)
	{
		m_Data[m_nCount] = item;
		++m_nCount;
	}
	else
		return;
}

void List::Visit(void(*func)(Item &))
{
	for (int i = 0; i < m_nCount; i++)
	{
		func(m_Data[i]);
	}
}


List::~List()
{
	m_nCount = 0;
}
