// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Graphies
{
	/*
	     图形的基本属性
	*/
public:
	virtual void paint(/* coc *pDC*/)
	{

	}
};

class Rectangle:public Graphies
{
	/*

  矩形的基本属性
	*/
public:
	void paint()
	{
		cout<<"矩形的绘制"<<endl;
	}
};

class Triangle:public Graphies
{
	/*
	三角形的基本属性
	*/
public:
	void paint()
	{
		cout<<"三角形的绘制"<<endl;
	}
};

class Eclipse:public Graphies
{
	/*
		圆形的基本属性
	*/
public:
	void paint()
	{
		cout<<"圆形的绘制"<<endl;
	}
};

void draw(Graphies *p)
{
	p->paint();
}

void main()
{
	Eclipse e;
	Rectangle r;
	Triangle t;
	draw(&e);
	draw(&r);
	draw(&t);
}