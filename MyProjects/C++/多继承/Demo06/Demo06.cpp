// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 在组合类中，首先析构本身，然后析构对象成员，对象成员析构的顺序和声明的顺序正好相反
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
	A a;
	B b;
public:
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

void main()
{
	C c;
}
