// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaaaaaaaaaaa"<<endl;
	}
};


class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbb"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"cccccccccccccccc"<<endl;
	}
};
//���������̳е��������������ö�����๹�캯����˳�򣬸��ݼ̳е�˳�������
class D:public C,public B,public A
{
public:
	D()
	{
		cout<<"dddddddddddddd"<<endl;
	}
};

void main()
{
	D d;
}