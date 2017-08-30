// Demo25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"
class Computer
{
	char str1[20];
	char str2[20];
	char str3[20];
public:
	Computer(){}
	Computer(char *str4,char *str5,char *str6)
	{
		strcpy(str1,str4);
		strcpy(str2,str5);
		strcpy(str3,str6);
	}
	void disp()
	{
		cout<<"www.baidu.com study"<<endl;
		cout<<str1<<":"<<str2<<":"<<str3<<endl;

	}
};


class Car
{
	char str[20];
public:
	Car(){}
	Car(char *str1)
	{
		strcpy(str,str1);
	}

	void disp()
	{
		cout<<str<<endl;
	}
};

class MBA
{
	char str[20];
public:
	MBA(){}
	MBA(char *str2)
	{
		strcpy(str,str2);
	}
	void disp()
	{
		cout<<str<<endl;
	}
};

class Forejgn
{
	char str1[20];
	char str2[20];
public:
	Forejgn(){}
	Forejgn(char *str3,char *str4)
	{
		strcpy(str1,str3);
		strcpy(str2,str4);

	}
	void disp()
	{
		cout<<str1<<":"<<str2<<endl;
	}
};

class Person:public Computer,public Car,public Forejgn,public MBA
{
	char name[20];
	bool sex;
	 
public://基类的构造函数通过参数化列表来调用
		Person(char *name,bool sex,char *str1,char *str2,char *str3,char *str4,char *str5,char *str6,char *str7)
			:Computer(str1,str2,str3),Car(str4),Forejgn(str5,str6),MBA(str7)
		{
			strcpy(this->name,name);
			this->sex=sex;
		}

		void disp()
		{
			cout<<name<<endl;
			if(sex=true)
			{
				cout<<"男"<<endl;
			}
			else
			{
				cout<<"女"<<endl;
			}
			Computer::disp();
			Car::disp();
			Forejgn::disp();
			MBA::disp();
		}

};

void main()
{
	Person p("张三",true,"C","C++","Python","五菱","英语","法语","学了没地方可用");
	p.disp();
}
