// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//�ڻ�Ϲ�ϵ�У�������������Ȼ�����������Ա��Ȼ����������������������Ա�ͻ�������˳���������˳�������෴
//ÿһ��������һ��ָ�����͵ĳ�Ա�������ʱ�򿪱ٿռ䣬�ߵ�ʱ��Ҫ�ͷſռ��
class A
{
	int *p;
public:
	A()
	{
		cout<<"11111111111111111"<<endl;
		p=new int;
	}
	~A()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
		delete p;
	}
};
class B
{
	int *p;
public:
	B()
	{
		cout<<"2222222222222222222222"<<endl;
		
		p=new int;
	}
	~B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
		delete p;
	}
};

class C
{
	int *p;
public:
	C()
	{
		cout<<"3333333333333333333333333"<<endl;
     	p=new int;
	}
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
		delete p;
	}
};
class D
{
	int *p;
public:
	D()
	{
		cout<<"444444444444444444444444444"<<endl;
		p=new int;
	}
	~D()
	{
		cout<<"ddddddddddddddddddddd"<<endl;
		delete p;
	}
};

class E:public A,public B
{
	int *p;
	C c;
	D d;
public:
	E()
	{
		cout<<"555555555555555555555555"<<endl;
		p=new int;
	}
	~E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeee"<<endl;
		delete p;
	}

};


void main()
{
	E e;
	
}
