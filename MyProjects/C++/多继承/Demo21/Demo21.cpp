// Demo21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// ӵ����ͬ��������������������ڴ����ж�ݵĻ�������ͨ������������޶������н����������������������ݵ�����
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};

class B:public A
{

};

class C:public A
{
};

class D:public B,public C
{
};

void main()
{
	D d;
	//d.f();
	d.B::f();
	d.C::f();
}