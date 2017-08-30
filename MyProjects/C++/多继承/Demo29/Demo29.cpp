// Demo29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class GrandFather
{
public:
	void f1()
	{
		cout<<"¼Ì³ÐÒ¯Ò¯µÄ¼òÆÓµÄ¾«Éñ"<<endl;
	}
};

class GrandMother
{
public:
	void f2()
	{
		cout<<"¼Ì³ÐÄÌÄÌµÄÉú»îÏ°¹ß"<<endl;
	}
};

class Mother
{
public:
	void f3()
	{
		cout<<"¼Ì³ÐÂèÂèµÄÉÆÁ¼ÈÈÇé"<<endl;
	}
};

class Father
{
public:
	void f4()
	{
		cout<<"¼Ì³Ð°Ö°ÖµÄ³Ï¿ÒÓÑºÃ"<<endl;
	}
};

class Me:public GrandFather,public GrandMother,public Mother,public Father
{
public:
	void f5()
	{
		cout<<"Ë§Æø¡¢Ñô¹â£¬ÓÄÄ¬"<<endl;
	}
};

void main()
{
	Me p;
	p.f1();
	p.f2();
	p.f3();
	p.f4();
	p.f5();
}