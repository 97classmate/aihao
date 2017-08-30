// nice8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()                     //关系运算符》》》》》》》》》》》》》》》》》》》》》》
{
	int a=3;
	int b=4;
	bool c1=(a>b);
	if(c1==true)
	{
		printf(">\n");
	}
	else
	{
		printf("不等于>\n");
	}
	bool c2=(a>=b);
	if(c2==true)
	{
		printf(">=\n");
	}
	else
	{
		printf("不等于>=\n");
	}
	bool c3=(a<b);
	if(c3==true)
	{
		printf("<\n");
	}
	else
	{
		printf("不等于<\n");
	}
	bool c4=(a<=b);
	if(c4==true)
	{
		printf("<=\n");
	}
	else
	{
		printf("<=\n");
	}
	bool c5=(a!=b);
	if(c5==true)
	{
		printf("!=\n");
	}
	else
	{
		printf("!=\n");
	}
	
}

