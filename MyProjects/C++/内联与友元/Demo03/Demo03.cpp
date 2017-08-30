// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//成员函数声明必须放在类的里面，但是成员函数的定义可以放在外面和里面
class A
{
public:
	//定义放在类体中的函数默认为内联
	void f1()
	{
		cout<<"11111111111"<<endl;
	}
	//加上lnline之后，该函数默认为内联函数，效率会提高
   inline void f2();
};

//定义放在类的外面并不默认是内联
 inline   void A::f2()
{
	cout<<"aaaaaaaaaaaaaaaaa"<<endl;
}

void main()
{
	A a1;
	a1.f1();
	a1.f2();
}