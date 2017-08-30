// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	int x;
	int y;
	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
};

void main()
{
	int x=3;
	//引用的书写函数
	int &y=x;

	cout<<x<<":"<<y<<endl;
	cout<<&x<<endl;
	cout<<&y<<endl;
	x=33;
	cout<<x<<":"<<y<<endl;
	y=333;
	cout<<x<<":"<<y<<endl;


	A a1;
	a1.x=3;
	a1.y=4;
	//对象的引用
     A &a2=a1;
	 a1.disp();
	 a2.disp();

	 a2.x=66;
	 a2.y=55;
	 a1.disp();
}

    


