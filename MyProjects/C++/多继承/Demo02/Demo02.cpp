// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//��һ�����а��������ʱ�򣬶����Ա�Ĺ��캯����������˳������
class A
{
public:

	A()
	{
		cout<<"aaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbb"<<endl;
	}

	
};

class C
{
	A a;
	B b;
public:
	
	C()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
}