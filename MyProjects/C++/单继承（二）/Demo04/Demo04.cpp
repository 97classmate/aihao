// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
	
public:
	
	~A()
	{
		cout<<"基类进行析构"<<endl;
	}

};

class B:public A
{
public:
	~B()
	{
		cout<<"派生类进行析构"<<endl;
	}
};


void main()
{
	B b;
}
