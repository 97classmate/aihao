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
		cout<<"���๹�캯��"<<endl;
	}
	~A()
	{
		if(p!=NULL);
		{
		delete p;
		 p=NULL;
		cout<<"������������"<<endl;

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
		cout<<"�����๹�캯��"<<endl;
	}
	~B()
	{
		if(p2!=NULL)
		{
			delete p2;
			p2=NULL;
			cout<<"��������������"<<endl;
		}
	}
};


void main()
{
	B b;
}