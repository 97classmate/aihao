// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//函数调用运算符重载，把函数调用运算符扩展到类对象使用中，类的对象相当于函数的名字
class A
{
public:
	double operator()(int a,int b);
};

double A::operator ()(int a,int b)
{
	return a+b;
}

void main()
{
	A a;
	int x=a(3,4);
	cout<<x<<endl;
}