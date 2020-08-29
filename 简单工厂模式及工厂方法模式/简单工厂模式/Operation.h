#pragma once
 
//运算基类
class COperation
{
public:
	COperation()
	{
		m_iNumberA = -1;
		m_iNumberB = -1;
	}
 
	virtual ~COperation()
	{
 
	}
 
	void SetNumberA(int iNumber)
	{
		m_iNumberA = iNumber;
	}
 
	void SetNumberB(int iNumber)
	{
		m_iNumberB = iNumber;
	}
 
	int GetNumberA()
	{
		return m_iNumberA;
	}
 
	int GetNumberB()
	{
		return m_iNumberB;
	}
 
	virtual int GetResult() = 0;
 
private:
	int m_iNumberA;
	int m_iNumberB;
};
 
//加法运算
class COperationAdd : public COperation
{
public:
	COperationAdd()
	{
	}
 
	virtual ~COperationAdd()
	{
	}
 
	int GetResult()
	{
		int iNumberA = GetNumberA();
		int iNumberB = GetNumberB();
		int iResult = iNumberA + iNumberB;
		return iResult;
	}
};
 
//减法运算
class COperationSub : public COperation
{
public:
	COperationSub()
	{
	}
 
	virtual ~COperationSub()
	{
	}
 
	int GetResult()
	{
		int iNumberA = GetNumberA();
		int iNumberB = GetNumberB();
		int iResult = iNumberA - iNumberB;
		return iResult;
	}
};
 
//乘法运算
class COperationMul : public COperation
{
public:
	COperationMul()
	{
	}
	virtual ~COperationMul()
	{
	}
 
	int GetResult()
	{
		int iNumberA = GetNumberA();
		int iNumberB = GetNumberB();
		int iResult = iNumberA * iNumberB;
		return iResult;
	}
};
 
//除法运算
class COperationDiv : public COperation
{
public:
	COperationDiv()
	{
	}
	virtual ~COperationDiv()
	{
	}
 
	int GetResult()
	{
		int iNumberA = GetNumberA();
		int iNumberB = GetNumberB();
		int iResult = iNumberA / iNumberB;
		return iResult;
	}
};