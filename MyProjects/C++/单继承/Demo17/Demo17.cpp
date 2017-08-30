// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//如果在类中已经写了构造函数，则编译器不会给你生成不带参数的构造函数
class A
{
public:
	A(int x)
	{}
	A(){}
};
//派生类的不带参数的构造函数会调用基类的不带参数的构造函数，如果你已经写了构造函数，则类中将不会生成默认的不带参数的构造函数
//这种情况，在派生类不带参数的构造函数调用时间，容易出错
class B:public A
{

};

void main()
{
	B b;
}