// Demo20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
	}
};
//���ȵ��û���Ĺ��캯��
//��ε��ð�����Ա�Ĺ��캯��
//�����ñ���Ĺ��캯��
class C:public B
{
	A a;
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