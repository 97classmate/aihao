// Demo22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//一个父类多次被继承，可以通过虚继承的形式在内存中只有一份拷贝，则不会出现数据冗余，不会有二义性的问题
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaa"<<endl;
	}
};

class B:virtual  public A
{

};

class C:virtual public A 
{
};

class D:public B,public C
{

};

void main()
{
	D d;
	d.f();
}