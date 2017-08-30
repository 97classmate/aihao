// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
private:
	int x;
	void f()
	{
		x=44;
		cout<<x<<endl;
		cout<<"aaaaaaaa"<<endl;
	}
	void fff()
	{
		x=55;//私有内容只可以在本类内容访问
		f();
	}
};

class B: public A
{
public:
	void ff()
	{
	//	f()//私有内容不可以子啊派生类使用
	}
};

void main()
{
	A a;
	//a.fff();//私有内容不能直接在外面访问
}