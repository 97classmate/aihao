// demo07.cpp : Defines the entry point for the console application.
//
// 数组判断例子

#include "stdafx.h"
//关键是2个负数的与或是正数，俩个正数的与或依然是正数
int abs(int x)
{
	int y=x>>31;
	return (x^y)-y;
}

void main()
{
	int x;
	printf("请输入原始的值\n");
	scanf("%d",&x);
	int value=abs(x);
	printf("结果为:%d\n",value);
}

