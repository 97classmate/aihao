// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
private:
	int x;
	void f()
	{
		x=44;
		cout<<x<<endl;
		cout<<"aaaaaaaa"<<endl;
	}
	void fff()
	{
		x=55;//˽������ֻ�����ڱ������ݷ���
		f();
	}
};

class B: public A
{
public:
	void ff()
	{
	//	f()//˽�����ݲ������Ӱ�������ʹ��
	}
};

void main()
{
	A a;
	//a.fff();//˽�����ݲ���ֱ�����������
}