// Demo02.cpp : Defines the entry point for the console application.
//


/*
 若每月公司销售小于100，每件20提成，大于100每件30的提成

  */
#include "stdafx.h"
void main()
{
	int a=0,sal=0;
	printf("请输入销售的数量 :");
	scanf("%d",&a);
	if(a<100)
		sal=a*20;
	else
		sal=a*30;
	printf("提成是多少: %d\n",sal);
}