// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Yesterday
{
public:
	void f()
	{
		cout<<"���г�"<<endl;
	}
};

class Today:public Yesterday
{
public:
	void walk()
	{
		cout<<"�������𳵣��ɻ�"<<endl;
	}
};

void main()
{
	Yesterday y;
	Today t;

	y.walk();
	t.walk();
}