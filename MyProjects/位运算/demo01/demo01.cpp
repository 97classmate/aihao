// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	printf("������Ҫ�жϵ�\n");
	scanf("%d",&x);
	printf("\n");
	if(x%2==0)
	{
		printf("ż��\n");
	}
	else
	{
		printf("����\n");
	}
	

	//ͨ��λ�����ж���ż�� 
	int flag=x&1;
	if(flag==0)
	{
		printf("ż��\n");
	}
	else
	{
		printf("����\n");
	}
}