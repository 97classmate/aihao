// demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void f1()// 不要返回值
{
}

int add(int a ,int b)//有返回值的情况，在方法体里面，必须有return
{
	return a+b;
}

void main()
{
	f1();
	int c=add(1,2);
	printf("%d\n",c);
}
