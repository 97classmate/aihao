// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"1"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"666666"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"2"<<endl;
	}
};
//���ȵ��ô�����Ĺ��캯��
//Ȼ����ü̳еĹ��캯��
//�������Լ��Ĺ��캯��
class D:public B,public C,virtual public A
{
public:
	D()
	{
		cout<<"3"<<endl;
	}
};

void main()
{

}
