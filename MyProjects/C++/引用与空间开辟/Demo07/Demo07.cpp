// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	//成员函数做引用的返回值
	int &f()
	{
		x=3;
		return x;
	}
};

void main()
{
	A a;
	int y=a.f();
	cout<<y<<endl;
}

