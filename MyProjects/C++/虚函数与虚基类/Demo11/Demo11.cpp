// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	virtual void f()=0;

};

class B:public A
{
public:
	void f()
	{
		cout<<"222222222"<<endl;
	}
};

void mian()
{
	A a;//���麯���಻������һ�����
	A *p=new B();
	p->f();//�������������ָ�����
}