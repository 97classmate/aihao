// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//����������˻���Ĺ��캯��
class A
{
public:
	A()
	{
		cout<<"1111111111111"<<endl;
	}
};

class B:public A
{
public:
	B()
	{
		cout<<"2222222222222"<<endl;
	}
};


void main()
{
	B b;
}