// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class B;
class A
{
public:

	void f(B b);

};

class B
{
public:
	friend void A::f(B b);
	B(int a,int b)
	{
		x=a;
		y=b;
	}
private:
	int x;
	int y;
};
//A中的函数访问B中的私有成员，通过友元函数 实现，友元函数为成员函数
void A::f(B b)
{
        cout<<b.x<<":"<<b.y<<endl;
}


void main()
{
	A a;
	B b(1,2);
	a.f(b);
}