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



//������������Ȼ��������������ĳ�Ա��Ȼ����������
//�������Ǽ̳�����������˳������
class C:public A
{
	B c;
public:
	~C()
	{
		cout<<"C�����������"<<endl;
	}
};



void main()
{
	C c;
}