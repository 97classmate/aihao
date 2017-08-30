// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//取N的某些位数
void main()
{
	printf("请输入一个数字\n");
	int n;
	scanf("%d",&n);
	int x=n>>4;

	int y=~(~0<<4);
	int z=x&y;
	printf("%d\n",z);
}