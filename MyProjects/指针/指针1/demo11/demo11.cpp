// demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void f(int a[],int length)
{	//�β�����������Ϊ��ַʹ��
	int *p=a;
	for(int i=0;i<length;i++)
	{
		printf("%d:%d\n",a[i],*(p++));
	}
}
void main()
{
	int a[]={1,2,3,4,5,6,7,8};
	f(a,8);
}