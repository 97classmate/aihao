// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//注意，我们限定职称是在某个范围之内
class Person
{
protected:
	char name[10];
	int age;
public:
	Person(){}
	Person(char *name2,int age2)
	{
		strcpy(name,name2);
		age=age2;
	}
};

class Teacher:public Person
{
private:
	char prof[30];
public:
	Teacher(){}
	Teacher(char *name,int age,char *prof):Person(name,age)
	{
		strcpy(this->prof,prof);
	}

	void test()
	{
		if(strcpy(prof,"教授")==0)
		{
			if(age<26)
				throw age;
		}

		if(strcpy(prof,"副教授")==0)
		{
			if(age<25)
				throw age;
		}

		if(strcpy(prof,"讲师")==0)
		{
			if(age<20)
				throw age;
		}

		if(strcpy(prof,"助教")==0)
		{
			if(age<19)
				throw age;
		}
	}

	void print()
	{
		cout<<"姓名:  "<<name<<"年龄:  "<<age<<"职称:  "<<prof<<endl;
	}
};

void main()
{
	Teacher te[]=
	{
		Teacher("张三",28,"教授"),
		Teacher("李四",25,"副教授"),
		Teacher("王五",22,"助教"),
		Teacher("隔壁老王",19,"讲师"),

	};

	for(int i=0;i<4;i++)
	{
		try
		{
			te[i].test();
			te[i].print();
		}

		catch(int i)
		{
			cout<<i<<"年龄输入不正确"<<endl;
		}
	}
}
