// Demo01.cpp : Defines the entry point for the console application.
//

//默认构造函数例子,浅拷贝

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A(int a,int b)
	{
		x=a;
		y=b;
	}
    A(A &a)
	{
		cout<<"拷贝构造函数"<<endl;
		x=a.x;
		y=a.y;
	}
	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
private:
	int x;
	int y;
};

void main()
{
	A a1(1,2);
	A a2=a1;//调用拷贝构造函数
	a1.disp();
	a2.disp();
}