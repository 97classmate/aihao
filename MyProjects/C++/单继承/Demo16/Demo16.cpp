// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
	int x;
public:
	A(int x)
	{
		cout<<"A��Ĵ������Ĺ��캯��"<<endl;
		this->x=x;
	}
	A()
	{
		cout<<"A�಻�������Ĺ��캯��"<<endl;
	}
};

class B:public A
{
	int y;
public:
	B(int x,int y):A(x)
	{
		cout<<"B��Ĵ������Ĺ��캯��"<<endl;
		this->y=y;
	}
	B()
	{
		cout<<"B�಻�������Ĺ��캯��"<<endl;
	}
};

class C:public B
{
	int z;
public:
	C(int x,int y,int z):B(x,y)
	{
		cout<<"C��������Ĺ��캯��"<<endl;
		this->z=z;
	}
	C()
	{
		cout<<"C�಻�������Ĺ��캯��"<<endl;
	}
};


void main()
{
	C c;
	C c2(1,2,3);
}