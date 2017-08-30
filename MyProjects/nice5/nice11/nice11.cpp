// nice11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//声明数组的地址对象
void main()
{
	int *a=new int[5];//自己开辟空间
	 
	for(int i=0;i<=4;i++)
	{
		a[i]=i+1;
	}

	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
}
