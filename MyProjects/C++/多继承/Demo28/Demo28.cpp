// Demo28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Flight
{
public:
	void f1()
	{
		cout<<"�ɻ�"<<endl;
	}
};


class Ship
{
public:
	void f2()
	{
		cout<<"�ִ�"<<endl;
	}
};


class Car
{
public:
	void f3()
	{
		cout<<"����"<<endl;
	}
};


class Bike
{
public:
	void f4()
	{
		cout<<"���г�"<<endl;
	}
};

class Person:public Flight,public Ship,public Car,public Bike
{
public:
	void f0()
	{
		cout<<"���ֳ�����"<<endl;
	}
};

void main()
{
	Person p;
	p.f1();
	p.f2();
	p.f3();
	p.f4();
	p.f0();
}
