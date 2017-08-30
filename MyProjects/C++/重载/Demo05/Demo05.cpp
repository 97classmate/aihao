// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Yesterday
{
public:
	void f()
	{
		cout<<"自行车"<<endl;
	}
};

class Today:public Yesterday
{
public:
	void walk()
	{
		cout<<"汽车，火车，飞机"<<endl;
	}
};

void main()
{
	Yesterday y;
	Today t;

	y.walk();
	t.walk();
}