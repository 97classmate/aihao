// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//引用做参数的交换
int a=3;
int b=4;

void swap1(int &x,int &y)
{
	int temp1=x;
          x=y;
	   y=temp1;
}

void main()
{
	swap1(a,b);
	cout<<a<<":"<<b<<endl;
}
