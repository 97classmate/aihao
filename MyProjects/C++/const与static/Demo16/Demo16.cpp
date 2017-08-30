// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"11111111111"<<endl;
	}

	void f2() const  //const 函数要把它放在函数的后面
	{
		cout<<"222222222"<<endl;
	}
};

//const只可以访问它自己
void main()
{
	A a1;
	a1.f1();
	a1.f2();

	const A a2;
	// a2.f1();  const不能访问一般函数
}