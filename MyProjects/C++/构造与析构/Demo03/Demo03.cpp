// Demo03.cpp : Defines the entry point for the console application.
//
//析构函数，不带什么参数 
#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	 A()
	 {
		 cout<<"the object is construct"<<endl;
	 }
		
	 ~A()
		{
			cout<<"对象被释放"<<endl;
		}

};

void main()
{
	A a;
	A *p=new A;
	delete p;
}
	 
