// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	int k;
	printf("清输入要进行处理的数字\n");
	scanf("%d",&x);
	printf("清输入要进行取的第几位\n");
	scanf("%d",&k);
	if(x==1)
	{
	    int value=x>>k&1;
	    printf("该位的值是%d\n",value);
	}
	else
	{
		printf("该位的值是1\n");
	}

}