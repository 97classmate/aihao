// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//系统帮我们生成析构函数，当对象的生命周期结束的时候会被调用
class
{
public:
	//~A(){}
};

void main()
{
	A a;
	A *p=new A;
	delete p;
}