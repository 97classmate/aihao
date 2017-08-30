// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
};
class B
{
};
class C
{
};
//单继承，单继承一个类
class D:public A
{};

//多继承，从多个类来进行派生
class E:public B,public C,public D
{
};

void main()
{

}