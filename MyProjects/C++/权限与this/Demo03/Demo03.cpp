// Demo03.cpp : Defines the entry point for the console application.
//
//protected ����
#include "stdafx.h"
#include "iostream.h"

class A
{
protected:
	int x;
	void f()
	{
		//�ڱ����ڲ�����
		x=44;
		cout<<x<<endl;
		cout<<"aaaaaaaa"<<endl;
	}

};

class B: public A
{
public:
	void ff()
	{
		//���������
		f();
	}
};

void main()
{
	A a;
	B b;

	
	//a.f();protected �������õ�������ʹ��
	b.ff();
}