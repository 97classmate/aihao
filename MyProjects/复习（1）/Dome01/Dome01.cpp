// Dome01.cpp : Defines the entry point for the console application.
//
/*
例子：公司员工的提成工资为毎销售一件为20元，如果大于100件的话，提成500元。

  */
#include "stdafx.h"

void main()
{
	int a=0,sal=0;
	printf("本月的销售量是：");
	scanf("%d",&a);
	sal=a*20;
	
	if(a>100)
		sal +=500;

	printf("你本月的销售提成为：%d\n",sal);
}
	

