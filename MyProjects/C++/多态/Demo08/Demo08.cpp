// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Study
{
public:
	virtual void f()
	{
		cout<<"332"<<endl;
	}
};

class Country1:public Study
{
public:
	void f()
	{
		cout<<"ѧУ��ѧϰ������ɱ�ĺܶ��˵Ĵ�������"<<endl;
	}
};

class Country2:public Study
{
public:
	void f()
	{
		cout<<"һ�ֽ������ռ�"<<endl;
	}
};

class Country3:public Study
{
public:
	void f()
	{
		cout<<"�Ǻ�"<<endl;
	}
};

class All
{
public:
	void learn(Study *s)
	{
		s->f();
	}
};

void main()
{
	Study f;
	Country1 c1;
	Country2 c2;
	Country3 c3;

	All all;

	all.learn(&f);
	all.learn(&c1);
	all.learn(&c2);
	all.learn(&c3);
}




