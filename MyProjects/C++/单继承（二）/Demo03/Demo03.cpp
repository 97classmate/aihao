// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//���������ĵ���˳������
//���ȵ��û���Ĺ��캯����Ȼ������Ա��Ĺ��캯���������ñ���Ĺ��캯��

class A
{
public:
	A()
	{
		cout<<"1111111111111"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"2222222222222"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

class D
{
public:
	D()
	{
		cout<<"dddddddddddddddddd"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	E()
	{
		cout<<"eeeeeeeeeeeeeeeeeee"<<endl;
	}
};


void main()
{
	E e;

}