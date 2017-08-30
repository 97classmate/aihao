// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class  Circle
{
	//圆的基本属性，圆心的坐标和半径
	int x;
	int y;
	int r;
public:

	//两个简单的构造函数
	Circle(){}
	Circle(int x,int y,int r)
	{
		this->x=x;
		this->y=y;
		this->r=r;
	}

	//面积和周长函数
	double around()
	{
		return 2*3.1415926*r;
	}
	double 3()
	{
		return 3.1415926*r;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":"<<r<<":"<<around()<<":"<<area()<<endl;
	}
};
//圆柱体继承于圆
class Columm:public Circle
{
	//圆柱体的高
	int h;
public:
	//圆柱体的构造函数
	Columm(){}
	//通过参数化列表调用基类的构造函数
    Columm(int x,int y,int r,int h):Circle(x,y,r)
	{
		this->h=h;
	}

	//圆柱体的表面积
	double surface()
	{
		return 2*area()*h*around();
	}
 
	//圆柱体的体积
	double v()
	{
		return area()*h;
	}
	
	void disp()
	{
		Circle::disp();
		cout<<surface()<<":"<<v()<<endl;
	}
};


void main()
{
    Columm c1(1,2,3,4);
	Columm c2(11,22,33,44);
	c1.disp();
	c2.disp();
}

