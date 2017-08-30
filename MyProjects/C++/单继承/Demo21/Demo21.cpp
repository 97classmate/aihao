// Demo21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
    ~A()
	{
		cout<<"析构A类"<<endl;
	}
};

class B:public A
{
public:
	~B()
{
	cout<<"析构B类"<<endl;
}
};
//这种调用具有隐藏性
//当对象超出其声明周期的时候，会进行逐级的析构，派生类的析构函数会调用基类的析构函数，是一种主动的调用
class C:public B
{
public:
  ~C()
	  {
		  cout<<"析构C类"<<endl;
	  }
};

void main()
{
	C c;
}