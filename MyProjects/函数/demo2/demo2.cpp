// demo2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
void mian()
{
	int x=3;
	int y=4;
	int z=5;

	int k1=add(x,y);
	int k2=add(x,y,z);
	printf("%d\n",k1);
	printf("%d\n",k2);
}