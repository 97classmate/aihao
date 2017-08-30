// Demo01.cpp : Defines the entry point for the console application.
//
//public继承例子
#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	
		void f1()
		{
			cout<<"爱爱爱爱爱爱你"<<endl;
		}
	

protected:

    	void f2()
		{
			cout<<"I love YOU"<<endl;
		}
	
private:
	void f3()
	{
		cout<<"5250520520520"<<endl;
	}
	
};
//公有继承代表把基类的public放在派生类的public下面，把基类的protected成员放在派生类protected受保护的下面
class B: public A
{
public:

	void f4()
	{
		f1();
		f2();
	}
protected:

private:

};
void main()
{
	B b;
	b.f4();
	b.f1();
}