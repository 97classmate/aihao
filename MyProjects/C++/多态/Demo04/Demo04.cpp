// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class people
{
public:
	virtual void zc()
	{
		cout<<"没有职称"<<endl;
	}
};

class ZJ:public people
{
public:
	void zc()
	{
		cout<<"一般的老师"<<endl;
	}
};

class JS:public people
{
public:
	void zc()
	{
		cout<<"高级讲师"<<endl;
	}
};

class Jiaoshou:public people
{
public:
	void zc()
	{	
		cout<<"教授"<<endl;

	}

};

class School
{
public://用基类的指针指向不同派生类的对象，动态联编
	void bangongshi(people *p)
	{
		p->zc();
	}
};


void main()
{
	ZJ zj;
	JS js; 
	Jiaoshou qs;
	School s;

	s.bangongshi(&zj);
	s.bangongshi(&js);
	s.bangongshi(&qs);
	
}