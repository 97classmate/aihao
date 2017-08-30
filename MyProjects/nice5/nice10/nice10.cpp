// nice10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//数组例子
void main()
{
	int a[5];//让系统自己开辟空间
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
			
}
	