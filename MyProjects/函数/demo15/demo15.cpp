// demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//�ݹ飬�Լ������Լ���ע��ݹ������������Ҫ���γ���ѭ��
int jiecheng(int x)
{
	if(x==1)
	{	
		return 1;
	}
	else
	{
		return x*jiecheng(x-1);
	}
}

void main()
{
	int x=jiecheng(3);
	int y=jiecheng(4);
	int z=jiecheng(5);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
}


