// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	// ������ǿ������һ���ṹ
	int a[]={1,2,3,4,5};
	int *p=a;
	
	printf("%d\n",a);//һ����ֻ�ǵ�ַҲ����ָ��
	printf("%d\n",p);
	
	printf("%d\n",sizeof(a));
		printf("%d\n",sizeof(p));//�ֽڵĴ�С��һ��
}