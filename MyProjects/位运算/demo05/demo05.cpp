// demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()

{
	int a;
	int k;
	printf("������ԭ��\n");
	scanf("%d",&a);
	printf("������ڼ�λ\n");
	scanf("%d",&k);

	int value=a|(1<<k);
	printf("���Ϊ: %d\n",value);
}

//00001011
//00001111