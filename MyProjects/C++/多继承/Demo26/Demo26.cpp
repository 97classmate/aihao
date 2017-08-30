// Demo26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Chuancai
{
public:
	void f()
	{
		cout<<"麻辣"<<endl;
	}
};

class Yuecai
{
public:
	void f()
	{
		cout<<"甜"<<endl;
	}
};

class Guizhoucai
{
public:
	void f()
	{
		cout<<"六马狗肉粉"<<endl;
	}
};

//通过多继承来进行食物的汇总
class All:public Chuancai,public Yuecai,public Guizhoucai
{
public:
	void f()
	{
		Chuancai::f();
		Yuecai::f();
		Guizhoucai::f();
	}
};

class People
{
	All a;//吃是必须的
public:
	void eat()//吃的函数
	{
		a.f();

	}
};

void main()
{
	People p;
	p.eat();
}





