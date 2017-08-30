// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A 
{
public:
	void f1(){}
	void f2(){}
	void f3(){}

	~A()//在析构函数中加入自己的操作
	{
		f1();
		f2();
		f3();
	}
};

void main()
{
	A a1;
}