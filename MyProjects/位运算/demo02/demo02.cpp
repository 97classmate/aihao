// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	int k;
	printf("������Ҫ���д��������\n");
	scanf("%d",&x);
	printf("������Ҫ����ȡ�ĵڼ�λ\n");
	scanf("%d",&k);
	if(x==1)
	{
	    int value=x>>k&1;
	    printf("��λ��ֵ��%d\n",value);
	}
	else
	{
		printf("��λ��ֵ��1\n");
	}

}