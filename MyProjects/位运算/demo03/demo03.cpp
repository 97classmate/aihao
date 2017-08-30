// demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int x;
	int k;
	printf("清输入原始是数字\n");
	scanf("%d",&x);
	printf("请输入取反的位数\n");
	scanf("%d",&k);

	int value=x&~(1<<k);
	printf("结果为: %d",value);
}

//0000 0111        
//0000 0011        
//0000 0101        
