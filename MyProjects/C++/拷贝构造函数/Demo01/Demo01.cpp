// Demo01.cpp : Defines the entry point for the console application.
//

//Ĭ�Ϲ��캯������,ǳ����

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A(int a,int b)
	{
		x=a;
		y=b;
	}
    A(A &a)
	{
		cout<<"�������캯��"<<endl;
		x=a.x;
		y=a.y;
	}
	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
private:
	int x;
	int y;
};

void main()
{
	A a1(1,2);
	A a2=a1;//���ÿ������캯��
	a1.disp();
	a2.disp();
}