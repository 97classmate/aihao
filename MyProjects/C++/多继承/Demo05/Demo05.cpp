// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// �����������У���������������������
class A
{
public:
	~A()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};
class B
{
public:
	~B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public A,public B
{
public:
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

void main()
{
	C c;
}
