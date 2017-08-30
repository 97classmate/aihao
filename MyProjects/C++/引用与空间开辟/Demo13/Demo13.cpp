// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//引用的多重性
//可以对一个变量做多次的引用
void main()
{
	int a=3;
	int &b=a;
	int &c=a;
    cout<<a<<":"<<b<<":"<<c<<endl;
}           