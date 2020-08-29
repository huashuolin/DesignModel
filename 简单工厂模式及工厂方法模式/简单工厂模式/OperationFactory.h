#pragma once
#include "Operation.h"
#include <string>
 
class COperationFactory
{
public:
	COperationFactory()
	{
	}
 
	virtual ~COperationFactory()
	{
	}
 
	COperation* GetOperation(std::string strOperationName)
	{
		COperation* pOperation = nullptr;
		if ("+" == strOperationName)
		{
			pOperation = new(std::nothrow) COperationAdd();
		}
		else if ("-" == strOperationName)
		{
			pOperation = new(std::nothrow) COperationSub();
		}
		else if("*" == strOperationName)
		{
			pOperation = new(std::nothrow) COperationMul();
		}
		else if ("/" == strOperationName)
		{
			pOperation = new(std::nothrow) COperationDiv();
		}
		return pOperation;
	}
};