// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	 ~A()
	 {
		 cout<<"1111111111111111111"<<endl;
	 }
};

class B
{
public:
	 ~B()
	 {
		 cout<<"222222222222222222222222"<<endl;
	 }
};

class C
{
public:
	 ~C()
	 {
		 cout<<"33333333333333333333333"<<endl;
	 }
};

class D
{
public:
	 ~D()
	 {
		 cout<<"444444444444444444444444444"<<endl;
	 }
};

class E:public A,public B//������������
{
	D d;
	C c;//Ȼ�����������Ա�ģ������Ա������˳���������˳�������෴
public:
	~E()//���������Լ�
	{
		cout<<"555555555555555555555"<<endl;
	}
};


void main()
{
	E e;
}