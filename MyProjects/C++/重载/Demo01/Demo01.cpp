// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//全局函数的重载
//函数参数的不一样
//函数参数的不一样，还有函数的返回值不一样
//函数的不一样包括参数和参数的类型
int add(int a,int b)
{
	return a+b;
}

int add(int a,int b,int c)
{
	return a+b+c;
}

float add(float a,float b)
{
	return a+b;
}

void main()
{
	int a=3;
	int b=4;
	int c=5;
	float x=1.22222;
	float y=2.11111;

	int m=add(a,b);
	int n=add(a,b,c);
	float u=add(x,y);

	cout<<m<<endl;
	cout<<n<<endl;
	cout<<u<<endl;
}

