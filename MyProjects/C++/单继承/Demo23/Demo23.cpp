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


//������������Ȼ�������������ĳ�Ա����Ա��������Ϥ��������˳���෴����������������
class D
{
	//����� ������
	A a;
	B b;
    C c;
	
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