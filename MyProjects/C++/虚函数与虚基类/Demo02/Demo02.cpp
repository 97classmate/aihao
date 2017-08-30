// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


class Base
{
	int A;
	int B;
public:
	virtual void f()
	{
	}

	virtual void g()
	{
	}
	
	virtual void h()
};

void main()
{
	Base b;
}