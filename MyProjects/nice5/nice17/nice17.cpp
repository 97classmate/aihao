// nice17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//	쳲�����

void main()
{
	int a[20];
	//쳲���������Ĭ��Ϊ0����һ��
	a[0]=0;
	//쳲���������Ĭ��Ϊ1���ڶ�����
	a[1]=1;
	//���������ǰ����֮��
	for(int i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	 //���д�ӡ
	for(i=0;i<20;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}