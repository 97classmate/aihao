// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//�ڻ�Ϲ�ϵ�У�������������Ȼ�����������Ա��Ȼ����������������������Ա�ͻ�������˳���������˳�������෴
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

class C
{
public:
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};
class D
{
public:
	~D()
	{
		cout<<"ddddddddddddddddddddd"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	~E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}

};


void main()
{
	E e;
}
