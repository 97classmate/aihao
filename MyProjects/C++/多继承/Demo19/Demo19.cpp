// Demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���̳еĶ����Բ�����󣬵��ǻ�Ĭ�ϵĵ��ñ���ĳ�Ա������ �ĳ�Աӵ������Ȩ�ޣ��������û����Ա�Ļ�
//��ͨ��::(�������)�����޶�
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B:public A
{
public:
	void f()
	{
		cout<<"Bbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public B
{
public:
	void f()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
	c.f();
	c.A::f();
	c.B::f();
}



