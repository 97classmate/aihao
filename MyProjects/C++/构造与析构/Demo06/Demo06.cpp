// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	int y;
	A(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	A(){}//这是一个好的习惯
	
	void setXY(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void setX(int x1)
	{
		x=x1;
	}
	void setY(int y1)
	{
		y=y1;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
		
};

void main()
{
	//生成对象的形式，不安全，由于直接调用了成员变量
	A a;
	a.x=3;
	a.y=4;
	a.disp();
//通过成员函数给对象赋值，这种情况下看起来不美观，不友好
	A a2;
	a2.setX(3);
	a2.setY(4);
	a2.disp();
    
	//通过构造函数生成对象，看起来美观、友好
	A a3(3,4);
	  a3.disp();

}






