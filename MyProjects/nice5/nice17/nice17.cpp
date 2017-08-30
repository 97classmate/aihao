// nice17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//	斐波那契

void main()
{
	int a[20];
	//斐波那契数列默认为0，第一个
	a[0]=0;
	//斐波那契数列默认为1，第二个；
	a[1]=1;
	//第三项等于前俩项之和
	for(int i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	 //进行打印
	for(i=0;i<20;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}