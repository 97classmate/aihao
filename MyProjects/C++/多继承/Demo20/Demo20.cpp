// Demo20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//����͸���ӵ��ͬ���Ķ����ԣ����ǿ���ͨ������������н��
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	void f()
	{
		cout<<"bbbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public A,public B
{

};

void main()
{
	C c;
	c.A::f();
	c.B::f();
}