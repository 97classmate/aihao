// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	static int y;

	void f1()//非静态成员函数可以调用静态成员函数和非静态成员函数,也可以调用静态变量和非静态变量
	{
		int x=3;
		int y=4;
		f2();
	}
	void f2()
	{
	}
	static int f3()//就静态函数只可以调用静态函数和静态变量
	{
		y=5;
		f4();
	}
	static int f4()
	{
	}
};

void main()
{
}