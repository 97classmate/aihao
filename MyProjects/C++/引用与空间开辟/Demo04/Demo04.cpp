// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//全局函数的返回值做引用
int x;
//引用做返回值的话，返回的是全局变量
int &f()
{
	x=4;
	return x;
}

int &f2()
{
	int y=4;//局部变量，在VC6里面，允许，但是不安全
	return y;
}

void main()
{
	int b=f();
	cout<<b<<endl;
	int c=f2();
	cout<<c<<endl;
}

