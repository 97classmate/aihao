// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 函数异常的练习
int div(int a,int b)
{
	if(b==0)
		throw 1;
	return a/b;
}

void main()
{
	int x;
	int y;

	cin>>x;
	cin>>y;
	int z;

	try
	{
		z=div(x,y);//由于div容易引发异常，所以我们用try扩起来
		cout<<z<<endl;

	}
	catch(int i)
	{
		cout<<"除于0的错误"<<endl;
	}
}
