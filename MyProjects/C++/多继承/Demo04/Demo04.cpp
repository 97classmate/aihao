// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//������͹��캯������д�������Ĵ�������
//�ȼ̳еĻ��๹�캯��ִ��
//Ȼ���Ӷ����캯��ִ��
//Ȼ����ִ��
class A
{
	int x;
	int y;
public:
	A(){}
	A(int x,int y)
	{
		cout<<"aaaaaaaaaaaaa"<<endl;
		this->x=x;
		this->y=y;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":";
	}
};

class B
{
	int x;
	int y;
public:
	B(){}
	B(int x,int y)
	{
		cout<<"bbbbbbbbbbbbbbbbbbbbbb"<<endl;
		this->x=x;
		this->y=y;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":";
	}
};

class C
{
	int x;
	int y;
public:
	C(){}
	C(int x,int y)
	{
		cout<<"ccccccccccccccccc"<<endl;
		this->x=x;
		this->y=y;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":";
	}
};

class D
{
	int x;
	int y;
public:
	D(){}
	D(int x,int y)
	{
		cout<<"dddddddddddddddd"<<endl;
		this->x=x;
		this->y=y;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":";
	}
};

class E:public A,public B
{
	int x;
	int y;
	C c;
	D d;
public:
	E(){}
	//ע������Ĵ�������
	E(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5):A(x1,y1),B(x2,y2),c(x3,y3),d(x4,y4)
	{
		cout<<"eeeeeeeeeeeeeeeee"<<endl;
		this->x=x5;
		this->y=y5;
	}

	void disp()
	{
		A::disp();
		A::disp();
		c.disp();
		d.disp();
		cout<<x<<":"<<y<<endl;
	}
};


void main()
{
	E e(1,1,2,2,3,3,4,4,5,5);
	e.disp();
}