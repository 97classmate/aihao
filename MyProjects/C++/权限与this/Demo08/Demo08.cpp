// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int x;
	int y;
public:
	A()
	{
		x=3;
		y=4;
	}
	//this�ĵڶ�����ʽʹ�ã���������Ϊ�����Ĳ���
	A f()
	{
		return *this;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
};


void main()
{

	A a;
	A b=a.f();
	b.disp();

}