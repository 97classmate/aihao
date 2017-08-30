// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	// 数组名强调的是一个结构
	int a[]={1,2,3,4,5};
	int *p=a;
	
	printf("%d\n",a);//一样的只是地址也就是指针
	printf("%d\n",p);
	
	printf("%d\n",sizeof(a));
		printf("%d\n",sizeof(p));//字节的大小不一样
}