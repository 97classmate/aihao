// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//B 类的声明
class B;

class A
{
public://由于类是友元，所以，类中的所有成员函数都可以访问友元类的私有部分
	void f1(B b);
	void f2(B b);
	void f3(B b);

};

class B
{
public:
	friend class A;//代表B是A的友元，在A类中科院访问B类中的任何私有部分
	B(int a,int b)
	{
		x=a;
		y=b;
	}

private:
	int x;
	int y;
};

void A::f1(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}

void A::f2(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}
void A::f3(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}

void main()
{
	B b1(1,2);
	B b2(3,4);
	B b3(5,6);

	A a;
	a.f1(b1);
	a.f2(b2);
	a.f3(b3);



}


