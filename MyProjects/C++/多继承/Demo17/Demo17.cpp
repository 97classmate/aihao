// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//��̳�����ʵ�����еĵ���Ӧ��
class Math
{
	char str1[20];
	char str2[20];
	char str3[20];
	
public:
	void study1()
	{
		strcpy(str1,"΢����");
		cout<<str1<<endl;
	}

	void study2()
	{
		strcpy(str2,"��ɢ��ѧ");
		cout<<str2<<endl;
	}

	void study3()
	{
		strcpy(str3,"ƫ΢�ַ���");
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
		strcpy(str1,"��");
		cout<<str1<<endl;
	}

	void study5()
	{
		strcpy(str2,"д");
		cout<<str2<<endl;
	}

	void study6()
	{
		strcpy(str3,"��");
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
		strcpy(str1,"��ѧ");
		cout<<str1<<endl;
	}

	void study8()
	{
		strcpy(str2,"��ѧ");
		cout<<str2<<endl;
	}

	void study9()
	{
		strcpy(str3,"���");
		cout<<str3<<endl;
	}
};

class Student:public Math ,public Foreign,public Physcial
{
public:
	void say1()
	{
		cout<<"�����й�"<<endl;
	}

	void say2()
	{
		cout<<"ѧ�ڹ���"<<endl;
	}

	void say3()
	{
		cout<<"���ڸ´�"<<endl;
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