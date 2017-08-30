// Demo02.cpp : Defines the entry point for the console application.
//

//protected继承例子
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
//保护继承把基类的public和protected放在派生类的protected下面
class B: protected A
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
//	 b.f1();  被继承过来的是protected的，不能直接进行访问，通过对象的直接访问
}
