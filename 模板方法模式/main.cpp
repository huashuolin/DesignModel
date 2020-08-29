// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "Template.h"
 
 
int main()
{
	std::cout << "当前网页展示分为三个模块" << std::endl;
 
	std::cout << "第一个模块：" << std::endl;
	CWebDisplayPicA WebPartA;
	WebPartA.DisplayAll();
 
	std::cout << "第二个模块：" << std::endl;
	CWebDisplayPicB WebPartB;
	WebPartB.DisplayAll();
 
	std::cout << "第三个模块：" << std::endl;
	CWebDisplayPicC WebPartC;
	WebPartC.DisplayAll();
 
	system("pause");
    return 0;
}
 
