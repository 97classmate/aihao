// demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	printf("%d\n",a);//直接存取找到值
	printf("%d\n"&a);//通过变量映射找到地址
	printf("%d\n",*(&a));//通过间接寻址找到值
}