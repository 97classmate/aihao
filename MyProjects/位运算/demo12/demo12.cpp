// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ȡN��ĳЩλ��
void main()
{
	printf("������һ������\n");
	int n;
	scanf("%d",&n);
	int x=n>>4;

	int y=~(~0<<4);
	int z=x&y;
	printf("%d\n",z);
}