// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


static int x=20;
//静态局部变量只可以本文件内部使用
void f1()
{
	//静态局部变量保存在全局区，仅仅在被初始化一次
	static int i=10;
    	i=i+10;
	 cout<<i<<endl;
}

void main()
{
	f1();
	f1();
	f1();
	f1();
}