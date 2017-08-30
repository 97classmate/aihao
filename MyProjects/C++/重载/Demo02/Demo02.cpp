// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//运算符的重载写成成员函数的形式
class A
{
public:
	int add(int a,int b)
	{
		return a+b;
	}

	int add(int a,int b,int c)
	{
		return a+b+c;
	}

	float add(float a,float b)
	{
		return a+b;
	}
};
// 书写方式友好，可读性也行，程序不容易出错
void main()
{
	int a=3;
	int b=3;
	int c=3;
	float x=1.1314;
	float y=1.214;

	A a1;
	cout<<a1.add(a,b)<<endl;
	cout<<a1.add(a,b,c)<<endl;
	cout<<a1.add(x,y)<<endl;
}
