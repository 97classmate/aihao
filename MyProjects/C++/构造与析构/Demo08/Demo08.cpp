// Demo08.cpp : Defines the entry point for the console application.
//
// 不同的类型，调用的构造函数也不一样
#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A(int a,int b)
	{
		cout<<"aaaaaaaaaa"<<endl;
	}
	A(int a,char b)
	{
		cout<<"bbbbbb"<<endl;
	}
	A(int a,bool b)
	{
		cout<<"cccccccccc"<<endl;
	}
};

void main()
{
	A a1(1,2);
	A a2(1,'A');
	A a3(1,true);
}
