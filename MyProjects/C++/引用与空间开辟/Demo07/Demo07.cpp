// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	//��Ա���������õķ���ֵ
	int &f()
	{
		x=3;
		return x;
	}
};

void main()
{
	A a;
	int y=a.f();
	cout<<y<<endl;
}

