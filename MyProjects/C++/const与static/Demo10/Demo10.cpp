// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"common funtcion"<<endl;
	}
	static void f2()
	{
		cout<<"static funtcion"<<endl;
	}
};

void main()
{
	static A a;//��̬����ȿ��Ե��ú���Ҳ���Ե��÷Ǿ�̬����
	a.f1();
	a.f2();
}