// Demo26.cpp : Defines the entry point for the console application.
//
//���������������������
#include "stdafx.h"
#include "iostream.h"

//����������������˳�����������������������Ա���������������
class A
{
public:
	~A()
	{
		cout<<"11111111111111"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"22222222222222"<<endl;
	}
};

class C:public A
{
	B b;
public:
	~C()
	{
		cout<<"333333333333333333"<<endl;
	}
};


void main()
{
	C c;
	
}
