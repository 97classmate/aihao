// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//�����Ĺ��캯���ĵ���˳�����ȵ��û���Ĺ��캯�������๹�캯���ĵ���˳��ͼ̳е�˳��һ��
//Ȼ����ö����Ա�Ĺ��캯���������Ա���캯����������˳��һ��
//�����ñ���Ĺ��캯��
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
public:
	C()
	{
		cout<<"CCCCCCCCCCCCCCCCCCCCC"<<endl;
	}
};
class D
{
public:
	D()
	{
		cout<<"DDDDDDDDDDDDDDDDDDDDDDDDD"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	
	E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
};


void main()
{
	E e;
}