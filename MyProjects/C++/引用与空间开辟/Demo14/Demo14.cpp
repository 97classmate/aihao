// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//引用的传递性的问题
//通过中间变量做地址的引用
void main()
{
	int a=3;
	int *p=&a;

	int *&p2=p;
	cout<<a<<":"<<*p<<":"<<*p2<<endl;

}
