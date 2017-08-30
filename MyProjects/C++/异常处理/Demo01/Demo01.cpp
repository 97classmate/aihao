// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


void main()
{
	try     //提示异常
	{
		int a=3;
		int b;
		cin>>b;

		if(b==0)
		{
			throw 1;//抛出异常
		}
		int c=a/b;
		cout<<c<<endl;
	}
	catch(int i)//接收异常
	{
		cout<<i<<endl;
		cout<<"你好像写错了哦亲！"<<endl;
	}

}
