// demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	int *p1;
	p1=&a;

	int b=4;
	int *p2=&b;
	printf("a在内存中的地址：%d\n",p1);
	printf("a在内存中的值：%d\n",*p1);
	printf("p1本身内存中的地址：%d\n",&p1);
}
