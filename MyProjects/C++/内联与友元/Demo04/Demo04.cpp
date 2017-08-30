// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
public:
	void f1()
	{
	}
private:
	int x;
	int y;

	void f2()
	{
	}
};

void main()
{
	A a;
	a.f1();
	//a.f2();//私有的内容不能在外面直接访问
}