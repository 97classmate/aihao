// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int x;
	static int y;

	void f1()//一般的函数既可以访问静态成员，也可以访问非静态成员
	{
		x=3;
		y=4;
	}
	static  void f2()
	{
	//	x=3;//静态成员函数只可以访问静态成员变量，不可以访问非成员变量
		y=4;
	}
};



void main()
{
}