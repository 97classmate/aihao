// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//拷贝构造函数的三种调用情况
class A
{
public:
	A()
	{
		x=0;
		y=0;
	}
		

	A(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
		void disp()
		{
			cout<<x<<":"<<y<<endl;
		}

		A(A &a)
		{
			cout<<"被调用"<<endl;
			x=a.x;
			y=a.y;
		}
		void f1(A a)
		{
		}

	 	   A f2()
		   {
			A a3;   
			return  a3;  
		   }

private:
	int x;
	int y;
};


void main()
{
	A a1(1,2);
	A a2=a1;
	A a3;
	a1.f1(a3);
	A a4=a1.f2();


	a1.disp();
	a2.disp();
	a3.disp();
	a4.disp();
}