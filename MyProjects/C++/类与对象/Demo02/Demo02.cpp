// Demo02.cpp : Defines the entry point for the console application.
//
//圆的例子
#include "stdafx.h"
#include "iostream.h"
class  Circle
{
public:
	int x;
	int y;
	int r;
	
	double around()
	{
		return 2*3.1415926*r;
	}
	double area()
	{
		return 3.1415926*r*r;
	}
	void disp()
	{
		double c=around();
		double s=area();
		cout<<"周长"<<c<<"   面积"<<s<<endl;
	}
};


void main()
{
		Circle c1;
		c1.x=0;
		c1.y=0;
		c1.r=6;

		Circle c2;
		c2.x=10;
		c2.y=0;
		c2.r=0;


		Circle c3;
		c3.x=20;
		c3.y=0;
		c3.r=0;

		Circle c4;
		c4.x=30;
		c4.y=0;
		c4.r=0;

		c1.disp();
		c2.disp();
		c3.disp();
		c4.disp();

		Circle *p=new Circle();
		p->r=50;
		p->x=10;
		p->y=10;
		
		p->disp();

}









