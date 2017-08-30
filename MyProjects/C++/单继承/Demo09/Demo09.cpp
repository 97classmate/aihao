// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//权限继承分为三种形式
class A
{
};

class B:public A
{
};
class C:protected B
{
};
class D:private C
{
};


void main()
{
}