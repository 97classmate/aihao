// demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//�����ݵ������ж���ʽ

bool f1(int x)
{
	bool b;
	b=((x&(x-1))==0)&&(x!=0);
	return b;
}
bool f2(int x)
{
	bool b;
	b=((x&(x+1))==x)&&(x!=0);
	return b;
}
bool f3(int x)
{
	bool b;
	b=((x&(~x+1))==x)&&(x!=0);
	return b;
}



void main()
{
	printf("������Ҫ�жϵ���\n");
	int x;
	scanf("%d",&x);
	
	bool b1=f1(x);
	bool b2=f2(x);
	bool b3=f3(x);
	printf("%d:%d:%d\n",b1,b2,b3);
}