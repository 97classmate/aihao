// Demo22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	~A()
	{
		cout<<"A�����������"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"B�����������"<<endl;
	}
};

class C
{
public:
	~C()
	{
		cout<<"C�����������"<<endl;
	}
};


//������������Ȼ���������࣬����������˳��ͼ̳�˳���෴���ȼ̳У�������
class D:public A,public B,public C
{
public:
	~D()
	{
		cout<<"D�����������"<<endl;
	}
};



void main()
{
	D d;
}