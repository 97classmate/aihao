// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	void f1()
	{
		cout<<"11111111111"<endl;
	}

	const void f2()
	{
		cout<<"222222222222"<<endl;
	}
};

void mian()
{
     A a1;
	 a1.f1();
	 a1.f2();

	  const A a2;
	  a2.f1(); //常对象不能访问一般函数
	  a2.f2();// 常对象不能直接调用常函数

	 
}

