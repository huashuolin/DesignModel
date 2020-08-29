#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
//迭代器基类
template<class T>
class IIterator
{
public:
	IIterator()
	{
 
	}
 
	virtual ~IIterator()
	{
 
	}
 
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual T* CurrentItem() = 0;
	virtual bool IsDone() = 0;
};
 
template<class T>
class ConcreteCAggregate;
 
//具体的迭代器
template<class T>
class ConcreteIterator : public IIterator <T>
{
	ConcreteCAggregate<T>* m_pAggr;
	int m_iCur;
public:
	ConcreteIterator(ConcreteCAggregate<T>* a)
	: m_pAggr(a)
	, m_iCur(0)
	{
 
	}
	virtual void First()
	{
		m_iCur = 0;
	}
	virtual void Next()
	{
		if (nullptr == m_pAggr)
		{
			return;
		}
		if (m_iCur < m_pAggr->GetLen())
		{
			m_iCur++;
		}
	}
	virtual T* CurrentItem()
	{
		if (nullptr == m_pAggr)
		{
			return nullptr;
		}
		if (m_iCur < m_pAggr->GetLen())
		{
			return &((*m_pAggr)[m_iCur]);
		}
		else
		{
			return nullptr;
		}
	}
	virtual bool IsDone()
	{
		if (nullptr == m_pAggr)
		{
			return false;
		}
		return (m_iCur >= m_pAggr->GetLen());
	}
};
 
//聚集类基类
template<class T>
class CAggregate
{
public:
	CAggregate()
	{
 
	}
 
	virtual ~CAggregate()
	{
 
	}
	virtual IIterator<T>* CreateIterator() = 0;
	virtual void AddData(T data) = 0;
	
};
 
//具体的聚集类
template<class T>
class ConcreteCAggregate :public CAggregate<T>
{
	vector<T> m_vecData;
public:
	ConcreteCAggregate()
	{
 
	}
 
	virtual IIterator<T>* CreateIterator()
	{
		return new ConcreteIterator<T>(this);
	}
 
	T& operator[](int index)
	{
		return m_vecData[index];
	}
 
	int GetLen()
	{
		return m_vecData.size();
	}
 
	void AddData(T data)
	{
		m_vecData.push_back(data);
	}
};