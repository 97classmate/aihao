// demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	int k;
	printf("������ԭʼ������\n");
	scanf("%d",&x);
	printf("������ȡ����λ��\n");
	scanf("%d",&k);

	int value=x&~(1<<k);
	printf("���Ϊ: %d",value);
}

//0000 0111        
//0000 0011        
//0000 0101        
