// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//this ��һ��ʹ����ʽ
class A
{
	int x;
	int y;
public:
	void disp()
	{
		cout<<x<<":"<<y<<endl;	
	}
	A(){}

	A(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
};

void main()
{
	A a(3,4);
	a.disp();

}