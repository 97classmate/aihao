// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	int *p;//���һ��������ָ�����͵ĳ�Ա�����Ļ�������Ҫ�����������ͷ�
	int a;

	A(int x,int y)
	{
		cout<<"�������"<<endl;
		p=new int(x);
		a=y;
	}
	~A()
	{
		cout<<"�ͷŶ���"<<endl;
		delete p;
	}
	void disp()
	{
		cout<<*p<<":"<<a<<endl;
	}
};

void main()
{
	A a1(1,2);
	 a1.disp();
}