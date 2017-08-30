// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//全局函数可以作为友元的函数
class A
{
public:
	friend void   f(A a);
	A(int a,int b)
	{
		x=a;
		y=b;
	}

private:
	int x;
	int y;
};
void f(A a)
{
	//通过友元可以访问私有的成员
	cout<<a.x<<":"<<a.y<<endl;
}
	

void main()
{
	A a(1,2);
	f(a);
}