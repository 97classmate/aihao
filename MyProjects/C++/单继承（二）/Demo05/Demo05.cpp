// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int *p;
public:
	A()
	{
		p=new int;
		cout<<"基类构造函数"<<endl;
	}
	~A()
	{
		if(p!=NULL);
		{
		delete p;
		 p=NULL;
		cout<<"基类析构函数"<<endl;

		}
	}
};

class B:public A
{
	int *p2;
public:
	B()
	{
		p2=new int;
		cout<<"派生类构造函数"<<endl;
	}
	~B()
	{
		if(p2!=NULL)
		{
			delete p2;
			p2=NULL;
			cout<<"派生类析构函数"<<endl;
		}
	}
};


void main()
{
	B b;
}