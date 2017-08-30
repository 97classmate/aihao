// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class A
{
	char name[20];
	int age;
	char edu[20];

	//���̳еĵ���ʵ��
	//Ĭ�Ϲ��캯�����𼶵���
	//���������캯�����𼶵���
	//disp�������𼶵���
public:
	A(){}
    A(char *name1,int age1,char *edua1) 
	{
		strcpy(name,name1);
		age=age1;
		strcpy(edu,edua1);
	}

	void disp()
	{
		cout<<name<<":"<<age<<":"<<edu<<":";
	}
};

class B:public A
{
	
	int age;
	char edu[20];

public:
	B(){}
 	B(char *name1,int age1,char *edu1,int age2,char *edu2 ):A(name1,age1,edu1)
	{
		age=age2;
		strcpy(edu,edu2);
	}

	void disp()
	{
		A::disp();
		cout<<age<<":"<<edu<<":";
	}

};

class C:public B
{
	int age;
	char edu[20];
public:
	C()
	{
	}
	C(char *name,int age1,char *edu1,int age2,char *edu2,int age3,char *edu3):B(name,age1,edu1,age2,edu2)
	{
		age=age3;
		strcpy(edu,edu3);
	}

	void disp()
	{
		B::disp();
		cout<<age<<":"<<edu<<endl;
	}

};

void main()
{
	C c1("����",20,"����",30,"˶ʿ",40,"��ʿ");
	c1.disp();

	C *c2=new C("����",10,"Сѧ",16,"��ѧ",19,"��ѧ");
	c2->disp();
	delete c2;
}

