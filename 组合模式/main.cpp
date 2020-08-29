// main.cpp : Defines the entry point for the console application.
//
 
#include "Composite.h"
 
#define DELETEMEMORY(pData) {if(nullptr != pData) {delete pData; pData = nullptr;}}
 
int main()
{
	IOganization* pHeadquarters = new(std::nothrow) CCompany("北京总部");
	IOganization* pBranchSH = new(std::nothrow) CCompany("上海华东区分部");
	IOganization* pBranchCD = new(std::nothrow) CCompany("成都西南区分部");
	IOganization* pOfficeNJ = new(std::nothrow) CCompany("南京办事处");
	IOganization* pOfficeHF = new(std::nothrow) CCompany("合肥办事处");
	IOganization* pOfficeCQ = new(std::nothrow) CCompany("重庆办事处");
	IOganization* pOfficeGY = new(std::nothrow) CCompany("贵阳办事处");
	IOganization* pHRDepartment = new(std::nothrow) CHRDepartment("人力资源部");
	IOganization* pTechDepartment = new(std::nothrow) CTechDepartment("技术部");
 
	//总部直属结构
	if (nullptr != pHeadquarters)
	{
		pHeadquarters->Add(pBranchSH);
		pHeadquarters->Add(pBranchCD);
		pHeadquarters->Add(pHRDepartment);
		pHeadquarters->Add(pTechDepartment);
	}
 
	//上海华东区分部直属结构
	if (nullptr != pBranchSH)
	{
		pBranchSH->Add(pOfficeNJ);
		pBranchSH->Add(pOfficeHF);
		pBranchSH->Add(pHRDepartment);
		pBranchSH->Add(pTechDepartment);
	}
 
	//成都西南区分部直属结构
	if (nullptr != pBranchCD)
	{
		pBranchCD->Add(pOfficeCQ);
		pBranchCD->Add(pOfficeGY);
		pBranchCD->Add(pHRDepartment);
		pBranchCD->Add(pTechDepartment);
	}
 
	//南京办事处直属结构
	if (nullptr != pOfficeNJ)
	{
		pOfficeNJ->Add(pHRDepartment);
		pOfficeNJ->Add(pTechDepartment);
	}
 
	//合肥办事处直属结构
	if (nullptr != pOfficeHF)
	{
		pOfficeHF->Add(pHRDepartment);
		pOfficeHF->Add(pTechDepartment);
	}
 
	//重庆办事处直属结构
	if (nullptr != pOfficeCQ)
	{
		pOfficeCQ->Add(pHRDepartment);
		pOfficeCQ->Add(pTechDepartment);
	}
 
 
	//贵阳办事处直属结构
	if (nullptr != pOfficeGY)
	{
		pOfficeGY->Add(pHRDepartment);
		pOfficeGY->Add(pTechDepartment);
	}
 
	//展示所有的组织
	pHeadquarters->DisPlay(1);
 
	//清理内存
	{
		DELETEMEMORY(pHeadquarters);
		DELETEMEMORY(pBranchSH);
		DELETEMEMORY(pBranchCD);
		DELETEMEMORY(pOfficeNJ);
		DELETEMEMORY(pOfficeHF);
		DELETEMEMORY(pOfficeCQ);
		DELETEMEMORY(pOfficeGY);
		DELETEMEMORY(pHRDepartment);
		DELETEMEMORY(pTechDepartment);
	}
 
	system("pause");
    return 0;
}
 