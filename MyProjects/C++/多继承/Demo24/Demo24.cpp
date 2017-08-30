// Demo24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Cloth1
{
private:
	/*
	没一件衣服可以作为一个成员变量

	*/
public:
	void f1()
	{
		cout<<"(1)韩式"<<endl;
	}

	void f2()
	{
		cout<<"(2)日系"<<endl;
	}
};

class Cloth2
{
private:
	/*
	毎一件夏天衣服可以作为本类的一个成员变量

	*/
public:
	void f3()
	{
		cout<<"中式"<<endl;
	}

	void f4()
	{
		cout<<"欧美英伦"<<endl;
	}
};

class Cloth3
{
private:

public:
	void f5()
	{
		cout<<"非主流"<<endl;
	}

	void f6()
	{
		cout<<"潮流"<<endl;
	}
};

class Cloth4
{
private:

public:
	void f7()
	{
		cout<<"500-1000"<<endl;
	}

	void f8()
	{
		cout<<"1000-3000"<<endl;
	}
};

class Person:public Cloth1,public Cloth2,public Cloth3,public Cloth4
{

};

void main()
{
	Person *p=new Person();
	int x;
	cout<<"亲!请输入你喜欢的款式编号就可以选取了哟QAQ!"<<endl;
	cin>>x;

	switch(x)
	{
	case 1://代表输入的编号
		p->f1();
		p->f2();
		break;
	case 2:
		p->f3();
		p->f4();
		break;
	case 3:
		p->f5();
		p->f6();
		break;
	case 4:
		p->f7();
		p->f8();
		break;
	}
	delete p;
}



