// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//所以函数都可以调用常变量和一般变量，但不能给成员变量赋值
class A
{
public:
	int x;
	const int y;

	void f1()
	{
         x=3;
		  //y=4;  //一般函数不能给常变量赋值

                //一般函数可以调用常变量
		cout<<x<<":"<<y<<endl;
	}
	const void f2()
	{
		cout<<x<<":"<<y<<endl;
		x=3;
		//y=4;    常成员变量的值不能改变
	}
};

void main()
{
}


