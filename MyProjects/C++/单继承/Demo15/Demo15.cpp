// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
	int x;
	int y;
public:
	A(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	//�����κβ���������һЩ��ʼ���Ĺ���
	A()
	{
		x=3;
		y=4;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
};

void main()
{
	A a;
	a.disp();
}