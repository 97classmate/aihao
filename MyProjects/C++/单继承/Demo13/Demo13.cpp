// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{};

class B
{};

class C
{};

//不同权限的继承，混合继承
class D:public A,protected B,private C
{};

void main()
{
}