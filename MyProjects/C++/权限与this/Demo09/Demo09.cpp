// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int x;
	int y;
public:
	//this 不可以在静态函数中  this不属于静态变量，而静态函数只能调用静态变量，所以静态函数中不可以出现this
	static void f()
	{
	//	cout<<this->x<<endl;
	}
};

void main()
{
}
