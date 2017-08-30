// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Complex
{
	int a;
	int b;
public:
	Complex(){}
	Complex(int r,int i)
	{
		this->a=r;
		this->b=i;
	}

	void disp()
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}

	//operator ���صı�ʾ���������Ҫ���ص������
	Complex operator+(Complex c2)
	{
		int a=this->a+c2.a;
		int b=this->b+c2.b;
		Complex c3(a,b);
		return c3;
	}
	Complex operator-(Complex c2)
	{
		int a=this->a-c2.a;
		int b=this->b-c2.b;
		Complex c3(a,b);
		return c3;
	}
};

void  main()
{
	Complex c1(10,10);
	Complex c2(1,2);
	//�����+�ŵ������������������ص�+���ߡ�����
	//C1---��Ĭ�ϴ��ݸ���this
	Complex c3=c1+c2;
	Complex c4=c1+c2;
	c1.disp();
	c2.disp();
	c3.disp();
	c4.disp();
}













