// Demo23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Music
{
	char  str1[10][20];
public:
	Music(){}
	void f1()
	{
		cout<<"���ó���"<<endl;
	}
};

class Action
{
	char str1[30];
	char str2[30];
	char str3[30];
public:
	Action(){}
	void f2()
	{
		cout<<"����,ˣ˧"<<endl;
	}
};

class Artist
{
	char str1[20];
public:
	void f3()
	{
		cout<<"��������"<<endl;
	}
};

class Person:public Music,public Action,public Artist
{
};


void main()
{
	Person p;
	p.f1();
	p.f2();
	p.f3();
}