// main.cpp : Defines the entry point for the console application.
//
 
#include "Composite.h"
 
#define DELETEMEMORY(pData) {if(nullptr != pData) {delete pData; pData = nullptr;}}
 
int main()
{
	IOganization* pHeadquarters = new(std::nothrow) CCompany("�����ܲ�");
	IOganization* pBranchSH = new(std::nothrow) CCompany("�Ϻ��������ֲ�");
	IOganization* pBranchCD = new(std::nothrow) CCompany("�ɶ��������ֲ�");
	IOganization* pOfficeNJ = new(std::nothrow) CCompany("�Ͼ����´�");
	IOganization* pOfficeHF = new(std::nothrow) CCompany("�Ϸʰ��´�");
	IOganization* pOfficeCQ = new(std::nothrow) CCompany("������´�");
	IOganization* pOfficeGY = new(std::nothrow) CCompany("�������´�");
	IOganization* pHRDepartment = new(std::nothrow) CHRDepartment("������Դ��");
	IOganization* pTechDepartment = new(std::nothrow) CTechDepartment("������");
 
	//�ܲ�ֱ���ṹ
	if (nullptr != pHeadquarters)
	{
		pHeadquarters->Add(pBranchSH);
		pHeadquarters->Add(pBranchCD);
		pHeadquarters->Add(pHRDepartment);
		pHeadquarters->Add(pTechDepartment);
	}
 
	//�Ϻ��������ֲ�ֱ���ṹ
	if (nullptr != pBranchSH)
	{
		pBranchSH->Add(pOfficeNJ);
		pBranchSH->Add(pOfficeHF);
		pBranchSH->Add(pHRDepartment);
		pBranchSH->Add(pTechDepartment);
	}
 
	//�ɶ��������ֲ�ֱ���ṹ
	if (nullptr != pBranchCD)
	{
		pBranchCD->Add(pOfficeCQ);
		pBranchCD->Add(pOfficeGY);
		pBranchCD->Add(pHRDepartment);
		pBranchCD->Add(pTechDepartment);
	}
 
	//�Ͼ����´�ֱ���ṹ
	if (nullptr != pOfficeNJ)
	{
		pOfficeNJ->Add(pHRDepartment);
		pOfficeNJ->Add(pTechDepartment);
	}
 
	//�Ϸʰ��´�ֱ���ṹ
	if (nullptr != pOfficeHF)
	{
		pOfficeHF->Add(pHRDepartment);
		pOfficeHF->Add(pTechDepartment);
	}
 
	//������´�ֱ���ṹ
	if (nullptr != pOfficeCQ)
	{
		pOfficeCQ->Add(pHRDepartment);
		pOfficeCQ->Add(pTechDepartment);
	}
 
 
	//�������´�ֱ���ṹ
	if (nullptr != pOfficeGY)
	{
		pOfficeGY->Add(pHRDepartment);
		pOfficeGY->Add(pTechDepartment);
	}
 
	//չʾ���е���֯
	pHeadquarters->DisPlay(1);
 
	//�����ڴ�
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
 