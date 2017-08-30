// demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int f1()
{
	printf("1111111111111\n");
	return 1;
}
int f2(int x)
{
	x=2*x;
	printf("2222222222222222222222\n");
	return x;
	
}

int f3()
{
	printf("33333333333333333333333\n");
		return 2;
}

void f4(int a,int b)
{
	printf("444444444444\n");
	printf("%d\n",a+b);
}
void main()
{
	//f4的第一个参数是整数，f2的个、返回值是整数，所以可以吧f2传递进去，f2的参数需要整数，所以，我可以吧f1传递进去
	f4(f2(f1()),f3());
}