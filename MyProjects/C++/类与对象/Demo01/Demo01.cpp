// Demo01.cpp : Defines the entry point for the console application.
//
//�����˵�����
#include "stdafx.h"
#include "iostream.h"
#include "string.h"
class Person
{
public:
	int id;
	char name[20];
	bool sex;
	int age;

	void work()
	{
		if(age<20)
			cout<<"ѧ��"<<endl;
		else if(age<60)
			cout<<"����"<<endl;
		else
			cout<<"���ݹ���"<<endl;
	}

	void like()
	{
		if(age<20)
			cout<<"����"<<endl;
		else if(age<60)
			cout<<"����"<<endl;
		else
			cout<<"��ѧ"<<endl;
	}

	void wang(char name1[20])
	{
		strcpy(name,name1);
		cout<<"name"<<endl;
		cout<<"name1"<<endl;
	}
	
	void judgeSex()
	{
		if(sex==true)
			cout<<"����"<<endl;
		else
			cout<<"Ů��"<<endl;
	}

};

void main()
{
	Person me;
	me.id=52252;
	me.age=19;

	me.sex=true;
    char str[]={"qingwen"};
	me.wang(str);
	me.judgeSex();
	me.like();
	me.work();

}

























