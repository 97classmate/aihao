// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	int x=15;
	int y=4;//2的2次方

	//注意优先级的问题<<<优先级低于数学运算符
	int z=x&((1<<3)-1);
	printf("%d\n",z);
}