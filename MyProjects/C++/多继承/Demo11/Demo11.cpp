// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���protected �̳еĻ�����д��ʽ
class A
{
public:
	void f1()
	{
		cout<<"aaaaaaaaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	void f2()
	{
		cout<<"bbbbbbbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C
{
public:
	void f3()
	{
		cout<<"cccccccccccccccccccccccc"<<endl;
	}
};

class D
{
public:
	void f4()
	{
		cout<<"dddddddddddddddddddddddddd"<<endl;
	}
};


class E:protected A,protected B,protected C
{
public:
	void f5()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
};


void main()
{

}