// Dome01.cpp : Defines the entry point for the console application.
//
/*
���ӣ���˾Ա������ɹ���Ϊ������һ��Ϊ20Ԫ���������100���Ļ������500Ԫ��

  */
#include "stdafx.h"

void main()
{
	int a=0,sal=0;
	printf("���µ��������ǣ�");
	scanf("%d",&a);
	sal=a*20;
	
	if(a>100)
		sal +=500;

	printf("�㱾�µ��������Ϊ��%d\n",sal);
}
	

