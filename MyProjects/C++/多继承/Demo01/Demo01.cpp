// Demo01.cpp : Defines the entry point for the console application.
//

//�ڼ̳е�ʱ��������ù��캯��������
#include "stdafx.h"
#include "iostream.h"

class A
{
public:

	A()
	{
		cout<<"aaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbb"<<endl;
	}

	
};

class C:public A,public B
{
public:
	
	C()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
}