// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//静态函数通过成员函数进行实现，在同一个范围内，重名的函数叫重载，重载实现的是静态联编
class Hath
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
};

void main()
{
	Haht m;
	cout<<m.add(1,1)<<endl;
	cout<<m.daa(1,1,1)<<endl;
}

