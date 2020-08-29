#pragma once
 
#include <iostream>
 
class CCommonWebDisplay
{
public:
	CCommonWebDisplay()
	{
 
	}
 
	virtual ~CCommonWebDisplay()
	{
 
	}
 
	void DisplayAll()
	{
		GenealOperation();
		DisplayText();
		DisplayPic();
	}
 
	void DisplayText()
	{
		std::cout << "展示文本信息" << std::endl;
	}
 
	void GenealOperation()
	{
		std::cout << "基本操作" << std::endl;
	}
 
	virtual void DisplayPic() = 0;
};
 
class CWebDisplayPicA : public CCommonWebDisplay
{
public:
	CWebDisplayPicA()
	{
 
	}
 
	virtual ~CWebDisplayPicA()
	{
 
	}
 
	void DisplayPic()
	{
		std::cout << "加载展示图片A方法（需要用户名、密码）" << std::endl;
	}
};
 
class CWebDisplayPicB : public CCommonWebDisplay
{
public:
	CWebDisplayPicB()
	{
 
	}
 
	virtual ~CWebDisplayPicB()
	{
 
	}
 
	void DisplayPic()
	{
		std::cout << "加载展示图片C方法（不需要用户名、密码）" << std::endl;
	}
};
 
class CWebDisplayPicC : public CCommonWebDisplay
{
public:
	CWebDisplayPicC()
	{
 
	}
 
	virtual ~CWebDisplayPicC()
	{
 
	}
 
	void DisplayPic()
	{
		std::cout << "加载展示图片C方法（FTP下载到本地后展示）" << std::endl;
	}
};
