// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//静态联编通过全局函数进行实现
//根据不同的参数进行不同的照应，在编译解阶段的照应
int add(int a,int b)
{
	return a+b;
}
int  add(int a,int b,int c)
{
	return a+b+c;
}

void main()
{
	cout<<add(1,1)<<endl;
	cout<<add(1,1,1)<<endl;
}
