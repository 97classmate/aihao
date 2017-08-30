// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	int *p;
	p=&a;// int *p=&a;//*p p=&a;

	printf("%d\n",a);//直接存取
	printf("%d\n",&a);
	printf("%d\n",*(&a));间接存取
	printf("%d\n",&p);
	printf("%d\n",p);//直接存取
	printf("%d\n",*p);//典型间接存取

}