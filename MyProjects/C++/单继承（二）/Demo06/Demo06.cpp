// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	 ~A()
	 {
		 cout<<"1111111111111111111"<<endl;
	 }
};

class B
{
public:
	 ~B()
	 {
		 cout<<"222222222222222222222222"<<endl;
	 }
};

class C
{
public:
	 ~C()
	 {
		 cout<<"33333333333333333333333"<<endl;
	 }
};

class D
{
public:
	 ~D()
	 {
		 cout<<"444444444444444444444444444"<<endl;
	 }
};

class E:public A,public B//最后析构基类的
{
	D d;
	C c;//然后析构对象成员的，对象成员析构的顺序和声明的顺序正好相反
public:
	~E()//首先析构自己
	{
		cout<<"555555555555555555555"<<endl;
	}
};


void main()
{
	E e;
}