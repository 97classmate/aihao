// nice13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int day;//有了break才能跳出switch，否则继续往下判断，直到4结束。
	scanf("%d",&day);//switch ...case整数类型正好相等的情况。
    switch(day)
	{
     case 1:
		  printf("学习\n");
		  break;
	case 2:
		  printf("看直播\n");
		  break;
    case 3:
		  printf("玩游戏\n");
		  break;
	case 4:
		  printf("出去玩\n");
		  break;
	case 5:
		  printf("继续学习\n");
		  break;
	default://default相当于else
			  printf("帅\n");
		  break;
	}
}