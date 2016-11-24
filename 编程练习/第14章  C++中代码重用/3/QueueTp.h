#pragma once

template<class T,int Num>
class QueueTp
{
private:
	T * m_pData;
	int m_nNumb;
public:
	QueueTp():m_nNumb(0)
	{
		m_pData = new T[Num];
	}
	bool Isempty() const
	{
		return m_nNumb == 0;
	}
	bool IsFull() const
	{
		return m_nNumb == Num;
	}
	bool Pop(T & data)
	{
		if (Isempty())
			return false;
		else
		{
			data = this->m_pData[m_nNumb-1];
			--m_nNumb;
			return true;
		}
	}	
	bool Push(T & data)
	{
		if (IsFull())
			return false;
		else
		{
			this->m_pData[m_nNumb] = data;
			++m_nNumb;
			return true;
		}
	}
	~QueueTp()
	{
		m_nNumb = 0;
		delete[] m_pData;
	}
};

