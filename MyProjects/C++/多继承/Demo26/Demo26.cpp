// Demo26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Chuancai
{
public:
	void f()
	{
		cout<<"����"<<endl;
	}
};

class Yuecai
{
public:
	void f()
	{
		cout<<"��"<<endl;
	}
};

class Guizhoucai
{
public:
	void f()
	{
		cout<<"�������"<<endl;
	}
};

//ͨ����̳�������ʳ��Ļ���
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
	All a;//���Ǳ����
public:
	void eat()//�Եĺ���
	{
		a.f();

	}
};

void main()
{
	People p;
	p.eat();
}





