// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//引用做函数参数具有返回的能力
int a=3;
int b=4;

void f(int &x,int &y)
{
	x++;
	y++;
}


void main()
{
	f(a,b);
	cout<<a<<":"<<b<<endl;
}
