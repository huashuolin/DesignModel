#pragma once
 
class CSingleton
{
private:
	CSingleton()
	: m_iCount(0)
	{
 
	}
	virtual ~CSingleton()
	{
 
	}
 
	int m_iCount;
 
public:
	static CSingleton* GetInstance()
	{
		static CSingleton inst;
		return &inst;
	}
 
	void CountAdd(int iNum)
	{
		m_iCount += iNum;
	}
 
	int GetCountNum()
	{
		return m_iCount;
	}
};