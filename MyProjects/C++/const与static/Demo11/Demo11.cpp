// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int a;
	int b;

	const int x;
	const int y;

	//const 成员只能在参数列表中进行初始化
	A(int a1,int b1,int x1,int y1):x(x1),y(y1)
	{
		a=a1;
		b=b1;
	}


	//一般变量的初始化可以通过参数化列表也可以在函数体内初始化
	/*	A(int a1,int b1,int x1,int y1):a(a1),b(b1),x(x1),y(y1)
	{
		
	}*/

	void disp()
	{
		cout<<a<<":"<<b<<":"<<x<<":"<<y<<endl;
	}
};

void main()
{
	A a1(1,2,3,4);
	a1.disp();
}