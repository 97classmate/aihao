// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Graphies
{
	/*
	     ͼ�εĻ�������
	*/
public:
	virtual void paint(/* coc *pDC*/)
	{

	}
};

class Rectangle:public Graphies
{
	/*

  ���εĻ�������
	*/
public:
	void paint()
	{
		cout<<"���εĻ���"<<endl;
	}
};

class Triangle:public Graphies
{
	/*
	�����εĻ�������
	*/
public:
	void paint()
	{
		cout<<"�����εĻ���"<<endl;
	}
};

class Eclipse:public Graphies
{
	/*
		Բ�εĻ�������
	*/
public:
	void paint()
	{
		cout<<"Բ�εĻ���"<<endl;
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