// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//ע�⣬�����޶�ְ������ĳ����Χ֮��
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
		if(strcpy(prof,"����")==0)
		{
			if(age<26)
				throw age;
		}

		if(strcpy(prof,"������")==0)
		{
			if(age<25)
				throw age;
		}

		if(strcpy(prof,"��ʦ")==0)
		{
			if(age<20)
				throw age;
		}

		if(strcpy(prof,"����")==0)
		{
			if(age<19)
				throw age;
		}
	}

	void print()
	{
		cout<<"����:  "<<name<<"����:  "<<age<<"ְ��:  "<<prof<<endl;
	}
};

void main()
{
	Teacher te[]=
	{
		Teacher("����",28,"����"),
		Teacher("����",25,"������"),
		Teacher("����",22,"����"),
		Teacher("��������",19,"��ʦ"),

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
			cout<<i<<"�������벻��ȷ"<<endl;
		}
	}
}
