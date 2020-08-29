// main.cpp : Defines the entry point for the console application.
//
 
#include "State.h"
 
 
int main()
{
	CBasketballPlayer BasketballPlayer;
 
	std::cout << "刚上场的时候:";
	BasketballPlayer.SetTime(1);
	BasketballPlayer.Play();
 
	std::cout << "打了8分钟过后:";
	BasketballPlayer.SetTime(9);
	BasketballPlayer.Play();
 
	std::cout << "下场休息3分钟并喝了一瓶红牛过后:";
	BasketballPlayer.SetTime(13);
	BasketballPlayer.Play();
 
	std::cout << "最后决胜3分钟:";
	BasketballPlayer.SetTime(46);
	BasketballPlayer.Play();
 
	std::cout << "比赛结束:";
	BasketballPlayer.SetTime(49);
	BasketballPlayer.Play();
 
	system("pause");
    return 0;
}
 