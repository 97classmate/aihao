// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//多继承在现实生活中的典型应用
class Math
{
	char str1[20];
	char str2[20];
	char str3[20];
	
public:
	void study1()
	{
		strcpy(str1,"微积分");
		cout<<str1<<endl;
	}

	void study2()
	{
		strcpy(str2,"离散数学");
		cout<<str2<<endl;
	}

	void study3()
	{
		strcpy(str3,"偏微分方程");
		cout<<str3<<endl;
	}
};


class Foreign
{
	char str1[20];
	char str2[20];
	char str3[20];
public:
	void study4()
	{
		strcpy(str1,"听");
		cout<<str1<<endl;
	}

	void study5()
	{
		strcpy(str2,"写");
		cout<<str2<<endl;
	}

	void study6()
	{
		strcpy(str3,"读");
		cout<<str3<<endl;
	}
};

class Physcial
{
	char str1[20];
	char str2[20];
	char str3[20];
public:
	void study7()
	{
		strcpy(str1,"力学");
		cout<<str1<<endl;
	}

	void study8()
	{
		strcpy(str2,"光学");
		cout<<str2<<endl;
	}

	void study9()
	{
		strcpy(str3,"电磁");
		cout<<str3<<endl;
	}
};

class Student:public Math ,public Foreign,public Physcial
{
public:
	void say1()
	{
		cout<<"生在中国"<<endl;
	}

	void say2()
	{
		cout<<"学在贵州"<<endl;
	}

	void say3()
	{
		cout<<"用在嘎打"<<endl;
	}
};

void main()
{
	Student s1;
	s1.study1();s1.study2();s1.study3();s1.study4();
	s1.study5();s1.study6();s1.study7();s1.study8();
	s1.study9();
    s1.say1();
	s1.say2();
	s1.say3();
}