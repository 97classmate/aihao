// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//引用可以多次传递
void main()
{
	int a=3;
	int &b=a;
	int &c=b;
    	c=4;
	cout<<a<<":"<<b<<":"<<c<<endl;
}
