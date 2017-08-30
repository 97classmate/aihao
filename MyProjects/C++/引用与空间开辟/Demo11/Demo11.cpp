// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A

{
	int a[20000000];
};


void f1(A a1)
{
}
//引用传递的是大对象
void f2(A &a1)
{
}


void main()
{
	A a;
	f1(a);
	f2(a);
}