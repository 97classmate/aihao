// Demo28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Flight
{
public:
	void f1()
	{
		cout<<"飞机"<<endl;
	}
};


class Ship
{
public:
	void f2()
	{
		cout<<"轮船"<<endl;
	}
};


class Car
{
public:
	void f3()
	{
		cout<<"汽车"<<endl;
	}
};


class Bike
{
public:
	void f4()
	{
		cout<<"自行车"<<endl;
	}
};

class Person:public Flight,public Ship,public Car,public Bike
{
public:
	void f0()
	{
		cout<<"多种车集合"<<endl;
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
