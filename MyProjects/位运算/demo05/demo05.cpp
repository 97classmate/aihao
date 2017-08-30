// demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()

{
	int a;
	int k;
	printf("请输入原数\n");
	scanf("%d",&a);
	printf("请输入第几位\n");
	scanf("%d",&k);

	int value=a|(1<<k);
	printf("结果为: %d\n",value);
}

//00001011
//00001111