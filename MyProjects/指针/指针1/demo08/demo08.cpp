// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	int *p;
	p=&a;// int *p=&a;//*p p=&a;

	printf("%d\n",a);//ֱ�Ӵ�ȡ
	printf("%d\n",&a);
	printf("%d\n",*(&a));��Ӵ�ȡ
	printf("%d\n",&p);
	printf("%d\n",p);//ֱ�Ӵ�ȡ
	printf("%d\n",*p);//���ͼ�Ӵ�ȡ

}