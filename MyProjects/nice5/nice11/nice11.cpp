// nice11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//��������ĵ�ַ����
void main()
{
	int *a=new int[5];//�Լ����ٿռ�
	 
	for(int i=0;i<=4;i++)
	{
		a[i]=i+1;
	}

	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
}
