// Demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaaaaaaa"<<endl;
	}
};

//����๹�캯���ĵ������,�������������Ķ���Ȼ��ŵ��ñ���Ĺ��캯��
class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbbbb"<<endl;
	}
};


class C
{
	A a;
	B b;
public:
	C()
	{
		cout<<"cccccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
}




