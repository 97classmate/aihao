// nice10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int pay=5000;//判断的更加细致。
	if(pay<3000)
	{
		printf("买鬼火");
	}
	else if(pay<7000)
	{
		printf("高配电脑");
	}
	else if(pay<50000)
	{
		printf("小车");
	}
	else if(pay<20000)
	{
		printf("旅游");
	}
	else if(pay<200000)
	{
		printf("帮助");
	}
	else
	{
		printf("看情况");
	}
}