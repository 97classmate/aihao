// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	void f()
	{
		cout<<"aaaaaaaaaaaaa"<<endl;
	}

	//��һ����ʽ�������ڲ�ֱ�ӷ��ʱ���ĳ�Ա
	void ff()
	{
		x=33;
		f();
	}
};

class B: public A
{
public:
	//�ڶ��ַ�����ʽ��������ֱ�ӷ���
	void f3()
	{
		x=44;
		ff();
	}
};
//�����ַ�����ʽ��������ֱ�ӷ���
class C
{
public:
	void f4()
	{
		A a;
		a.f();
		a.x=55;
	}
};


void main()
{
	A a;
	B b;
	C c;
	a.ff();
	b.f3();
	c.f4();


//����������������ֱ�ӷ��ʣ����ڵ����ַ�����ʽ
	a.f();

}






