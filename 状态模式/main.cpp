// main.cpp : Defines the entry point for the console application.
//
 
#include "State.h"
 
 
int main()
{
	CBasketballPlayer BasketballPlayer;
 
	std::cout << "���ϳ���ʱ��:";
	BasketballPlayer.SetTime(1);
	BasketballPlayer.Play();
 
	std::cout << "����8���ӹ���:";
	BasketballPlayer.SetTime(9);
	BasketballPlayer.Play();
 
	std::cout << "�³���Ϣ3���Ӳ�����һƿ��ţ����:";
	BasketballPlayer.SetTime(13);
	BasketballPlayer.Play();
 
	std::cout << "����ʤ3����:";
	BasketballPlayer.SetTime(46);
	BasketballPlayer.Play();
 
	std::cout << "��������:";
	BasketballPlayer.SetTime(49);
	BasketballPlayer.Play();
 
	system("pause");
    return 0;
}
 