// Demo29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class GrandFather
{
public:
	void f1()
	{
		cout<<"�̳�үү�ļ��ӵľ���"<<endl;
	}
};

class GrandMother
{
public:
	void f2()
	{
		cout<<"�̳����̵�����ϰ��"<<endl;
	}
};

class Mother
{
public:
	void f3()
	{
		cout<<"�̳��������������"<<endl;
	}
};

class Father
{
public:
	void f4()
	{
		cout<<"�̳аְֵĳϿ��Ѻ�"<<endl;
	}
};

class Me:public GrandFather,public GrandMother,public Mother,public Father
{
public:
	void f5()
	{
		cout<<"˧�������⣬��Ĭ"<<endl;
	}
};

void main()
{
	Me p;
	p.f1();
	p.f2();
	p.f3();
	p.f4();
	p.f5();
}