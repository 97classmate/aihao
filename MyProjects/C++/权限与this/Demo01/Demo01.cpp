// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;

	void f()
	{
		//�����ڲ�ֱ�ӷ���
		cout<<x<<endl;
		cout<<"aaaaaaaaaa"<<endl;
	}
};

class B:public A//�̳�������
{
public:
	void ff()
	{
		x=5;
		f();
	}
};


void main()
{
	A a;//ͨ������������
	a.x=3;
	a.f();

	B b;
	b.ff();
}

