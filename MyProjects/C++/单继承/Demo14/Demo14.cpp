// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"A�Ĺ��캯��"<<endl;
	}
};
class B:public A
{
public:
	B()
	{
		cout<<"B�Ĺ��캯��"<<endl;
	}
};

//������Ĺ��캯��һ������û���Ĺ��캯����������Ĳ��������Ĺ��캯�����û���Ĳ��������Ĺ��캯��
class C:public B
{
	C()
	{
		cout<<"C�Ĺ��캯��"<<endl;
	}
};

void main()
{
	B b;//��A������Ҳ�̳й�����
}
