// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//重写的例子
class Wang
{
public:
	void f()
	{
		cout<<"前苏联"<<endl;
	}
};

class LiaoLingHao:public Wang
{
public:
	void f()
	{
		cout<<"今天的辽宁号"<<endl;
	}
};

void main()
{
	Wang w;
	w.f();
	LiaoLingHao l;
	l.f();
}