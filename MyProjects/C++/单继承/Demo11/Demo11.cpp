// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
};
//多接继承
class B: public A
{
};
class C: public B
{
};
class D:public C
{};

//单接继承
class E 
{};

class Y:public E
{};

void main()
{
}
