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
	printf("a���ڴ��еĵ�ַ��%d\n",p1);
	printf("a���ڴ��е�ֵ��%d\n",*p1);
	printf("p1�����ڴ��еĵ�ַ��%d\n",&p1);
}
