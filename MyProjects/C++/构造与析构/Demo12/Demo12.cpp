// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	const int y;

	A():y(0)
	{}

	//const成员变量的初始化需要在构造函数的后面加上：的形式进行书写，---》初始化列表
    A(int a,int b):y(b)//b=y;
	{
		x=a;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
	//非const的成员也可以通过初始化的形式进行初始化，const的成员必须通过初始化类型的形式来进行
	A(int a,int b,int c):x(a),y(b)//x=a;y=b
	{
	}
};

void main()
{
	A a1(1,2);
	a1.disp();

	A  a2(33,44,55);
	   a2.disp();
}