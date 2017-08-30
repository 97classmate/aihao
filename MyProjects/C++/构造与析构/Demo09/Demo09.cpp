// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	int *p;//如果一个类中有指针类型的成员变量的话，则需要析构函数的释放
	int a;

	A(int x,int y)
	{
		cout<<"构造对象"<<endl;
		p=new int(x);
		a=y;
	}
	~A()
	{
		cout<<"释放对象"<<endl;
		delete p;
	}
	void disp()
	{
		cout<<*p<<":"<<a<<endl;
	}
};

void main()
{
	A a1(1,2);
	 a1.disp();
}