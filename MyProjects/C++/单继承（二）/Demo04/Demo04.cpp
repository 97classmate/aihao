// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
	
public:
	
	~A()
	{
		cout<<"�����������"<<endl;
	}

};

class B:public A
{
public:
	~B()
	{
		cout<<"�������������"<<endl;
	}
};


void main()
{
	B b;
}
