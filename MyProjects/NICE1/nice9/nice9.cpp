// nice9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int pay=10000;
	if(pay<20000)//if 后面跟的是关系表达式，其结果为真或假，为真则执行，为假则比执行
	{
		printf("鬼火\n");
	}
	if(pay>20000)
	{
		printf("小车\n");
	}

}