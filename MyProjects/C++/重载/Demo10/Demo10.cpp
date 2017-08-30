// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int v;
public:
	A()
	{
		v=0;
	}

	void disp()
	{
		cout<<v<<endl;
	}

	//先进行++，后进行返回，所以我们直接进行返回
    A operator++()
	{
		cout<<"前置"<<endl;
		v++;
		return *this;
	}

	//在做后置++的时候，通过函数中整型的参数进行界定
	//后置的++由于先返回，后形成对象，所以在后置的++中我们生成了对象

	A operator++(int n)
	{
		cout<<"后置"<<endl;
		A a;
		a.v=v++;
		return a;
	}


};


void main()
{
	A a;
	for(int i=0;i<10;i++)
	{
		a++;//后置
		a.disp();
	}

	A a2;
	for( i=0;i<5;i++)
	{
		++a2;//前置
		a2.disp();
	}
}
