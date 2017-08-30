// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//对象的四种形式。。。。不会超过四种形式
class Rect
{
	//成员变量
public:
	int x;
	int y;
//成员函数
public:
	//求周长
	int aorund()
	{
		return 2*(x*y);
	}

	int area()
	{
		return x*y;
	}
	//求面积
	char *judge()
	{
		if(x!=0&&y!=0)
		{
		if(x==y)
		{
			char *str="是正方形";
				return str;
		}
		else
		{
			char *str="不是正方形";
				return str;
		}
		}
		else
		{
			if(x==0&&y==0)
			{
				char *str="点";
				return str;
			}
			else
			{
				char *str="线";
				return str;
			}
		}
	}
	void disp()
	{
		cout<<x<<":"<<y<<":"<<aorund()<<":"<<area()<<":"<<judge()<<endl;
	}
};

void main()
{
	//一般对象
	Rect r1;
	r1.x=10;
	r1.y=0;
	r1.disp();

	//指针对象
	Rect *r2=new Rect;
	r2->x=60;
	r2->y=60;
	r2->disp();

	//数组对象
	Rect r3[5];
	for(int i=0;i<5;i++)
	{
		r3[i].x=10*i;
		r3[i].y=10*i;
		r3[i].disp();
	}
	//数组指针对象
	Rect *r4[5];
	for( i=0;i<5;i++)
	{
		r4[i]=new Rect;
		r4[i]->x=100;
		r4[i]->y=200;
		r4[i]->disp();
	}
}















































