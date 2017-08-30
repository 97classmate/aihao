// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
void main()
{
	int x=3;
	int &y=x;

	y=4;
	cout<<x<<":"<<y<<endl;

	int a=3;
	const int &b=a;
	//b=4;//常引用是不能改变的啦

	a=44;
	cout<<a<<":"<<b<<endl;
}