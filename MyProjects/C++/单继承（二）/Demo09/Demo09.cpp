// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class Teacher
{
	//基本讲师的成员变量
	char *name;
	int age;
	char *what;
	
public:
	// 讲师构造函数
	Teacher(){}
	Teacher(char *name,int age,char *what)
	{
		this->name=new char[20];
		this->what=new char[20];
		strcpy(this->name,name);
		strcpy(this->what,what);
		this->age=age;

	}

	void judge()
	{
		if(age<16)
			cout<<"不能成为讲师，违法的"<<endl;
		else
			cout<<"合法的讲师"<<endl;
	}

	void disp()
	{
		cout<<name<<":"<<age<<":"<<what;
	}

	int getAge()
		{
			return age;
		}
};

//叫兽继承于讲师
class Professor:public Teacher
	{
		char *what2;
	public:
		// 基本的构造函数
		Professor(){}
		Professor(char *name,int age,char *what,char *what2):Teacher(name,age,what)
		{
			this->what2=new char[20];
			strcpy(this->what2,what2);
		}
		void disp()
		{
			Teacher::disp();
			cout<<what2<<endl;
		}

		void judge()
		{
			Teacher::judge();
			if(getAge()<30)
				cout<<"违法的叫兽"<<endl;
			else
			    cout<<"合法的叫兽"<<endl;
		}

		
};

	void main()
	{
		//生成对象并调用类的方法
		Professor p1("张三",40,"讲师","叫兽");

		p1.disp();
		p1.judge();

		Professor p2("王五",19,"讲师","叫兽");
		p2.disp();
		p2.judge();

		//成成指针类型的对象，并调用其中的方法
		Professor *p3=new Professor("李四",16,"叫兽","讲师");
		p3->disp();
		p3->judge();
	}