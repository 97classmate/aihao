// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	printf("请输入要判断的\n");
	scanf("%d",&x);
	printf("\n");
	if(x%2==0)
	{
		printf("偶数\n");
	}
	else
	{
		printf("奇数\n");
	}
	

	//通过位运算判断奇偶数 
	int flag=x&1;
	if(flag==0)
	{
		printf("偶数\n");
	}
	else
	{
		printf("奇数\n");
	}
}