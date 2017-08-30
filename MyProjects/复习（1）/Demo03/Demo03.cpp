// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//if eles if else if else例子

void main()
{
	int a=0,sal=0;
	printf("请输入销售的数量: ");
	scanf("%d",&a);

	if(a<100)
		sal=a*10;
	else if(a<200)
		sal=a*25;
	else if(a<300)
		sal=a*30;
	else
		sal=a*50;
	printf("销售的提成: %d\n",sal);
}