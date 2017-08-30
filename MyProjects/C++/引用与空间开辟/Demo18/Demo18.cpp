// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//

void main()
{
	//常量本身，编辑器会对常量产生临时变量
	const int &a=3;

	const int b=3;

	const int &x=b;

		cout<<a<<":"<<b<<":"<<x<<endl;

	//引用的两种形式，第一，上面的引用变量本身，第二，引用变量地址
	const int * const&c=&b;
	cout<<c<<":"<<&b<<endl;
}
