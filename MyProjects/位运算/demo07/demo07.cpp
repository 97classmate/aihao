// demo07.cpp : Defines the entry point for the console application.
//
// �����ж�����

#include "stdafx.h"
//�ؼ���2����������������������������������Ȼ������
int abs(int x)
{
	int y=x>>31;
	return (x^y)-y;
}

void main()
{
	int x;
	printf("������ԭʼ��ֵ\n");
	scanf("%d",&x);
	int value=abs(x);
	printf("���Ϊ:%d\n",value);
}

