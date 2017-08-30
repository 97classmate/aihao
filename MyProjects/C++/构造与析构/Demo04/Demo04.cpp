// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// 如果我们自己写了构造函数，编译器不会为我们生成不带任何参数的构造函数
class A
{
public:
	A(int x,int y)
	{
	};
};

void main()
{
	A a(2,3);
	A a2;
}