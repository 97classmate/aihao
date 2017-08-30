// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//在我们书写程序的时候，一个try可以对应多catch,可以看到多个不同类型的异常
void main()
{
	try
	{
		int x;
		cin>>x;
		if(x==0)
			throw 0;
		if(x==4)
		{
			throw 'A';
		}
		if(x==7)
		{
			throw 3.14159;
		}
	}
	catch(int a)//接受整数的异常
	{
		cout<<a<<endl;
	}
	catch(char b)// 接收字符的异常
	{
		cout<<b<<endl;
	}
	catch(double c)//接收浮点数我的异常
	{
		cout<<c<<endl;
	}
}

