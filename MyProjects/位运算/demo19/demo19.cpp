// demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	printf("请输入一个整数\n");
	int num;
	scanf("%d",&num);
	num=num&(num-1);
	printf("%d\n",num);
	num=num&(num-1);
	printf("%d\n",num);
	
	num=num&(num-1);
	printf("%d\n",num);
		num=num&(num-1);
	printf("%d\n",num);
		num=num&(num-1);
	printf("%d\n",num);
	
	
}
//1+2+4+8+16+32=63;
//00001111
//63-1=62;
//62-2=60;
//60-4=56;
//56-8=48;
//48-16=32;
//32-32=0;