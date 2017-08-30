// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class  Person
{
	char name[20];
	int age;
public:
	Person(){}

	Person(char *name2,int age2)
	{
		strcpy(name,name2);
		age=age2;
	}

	virtual void disp()
	{
		cout<<name<<":"<<age;
	}
};

class Paint:public Person
{
	char name2[20];
	int width;
	int height;
public:
	Paint(){}
	Paint(char *name1,int age,char *name2,int width,int height):Person(name1,age)
	{
		strcpy(this->name2,name2);
		this->width=width;
		this->height=height;
	}

	void disp()
	{
		Person::disp();
		cout<<":"<<name2<<":"<<width<<":"<<height<<endl;
	}
};


class Piano:public Person
{
	char name[20];
	char voice;
public:
	Piano(char *name1,int age,char *name2,char voice):Person(name1,age)
	{
		strcpy(name,name2);
		this->voice=voice;
	}
  void disp()
	{
		Person::disp();
		cout<<":"<<name<<":"<<voice<<endl;
	}
};

void Vishw(Person *p)
{
	p->disp();
};

void main()
{
	Paint p1("达芬奇",3,"改单",20,20);
	Piano p2("贝多芬",10,"厉害",'a');
	Vishw(&p1);
	Vishw(&p2);
}


