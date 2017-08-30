// Demo01.cpp : Defines the entry point for the console application.
//
//描述人的例子
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
			cout<<"学生"<<endl;
		else if(age<60)
			cout<<"工人"<<endl;
		else
			cout<<"退休工人"<<endl;
	}

	void like()
	{
		if(age<20)
			cout<<"初中"<<endl;
		else if(age<60)
			cout<<"高中"<<endl;
		else
			cout<<"大学"<<endl;
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
			cout<<"男生"<<endl;
		else
			cout<<"女生"<<endl;
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

























