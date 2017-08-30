// nice14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//数组反转例子。。
void main()
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	//逐个进行倒置 a[i ]  a[8-i]进行倒置

	for(int i=0;i<(9/2);i++)
	{
		int temp=a[i];
		a[i]=a[8-i];
		a[8-i]=temp;
	}
	//进行打印
	for(i=0;i<9;i++)
	{
		printf("%d\t",a[i]);
	}
}
