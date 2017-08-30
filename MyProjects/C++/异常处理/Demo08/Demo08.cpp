// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//数组指针越界的判断，用异常的形式进行处理
int a[]={1,2,3,4,5,6,7,8};


int f(int x)
{
	if(x<0||x>7)
		throw 1;
	throw a[x];
}


void main()
{
	try
	{
		cout<<"a[12]*"<<f(-3)<<endl;
	}
	catch(int i)
	{
		cout<<"数组指针越界"<<endl;
	}
}
