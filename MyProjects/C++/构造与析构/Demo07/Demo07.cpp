// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	int x;
	int y;
	int z;

	A()
	{
		cout<<"��һ�����캯��"<<endl;
	}
	A(int x1)
	{
		x=x1;
		cout<<"�ڶ������캯��"<<endl;
	}
	A(int x1,int y1)
	{
		x=x1;
		y=y1;
		cout<<"���������캯��"<<endl;
	}
	A(int x1,int y1,int z1)
	{
		x=x1;
		y=y1;
		z=z1;
		cout<<"���ĸ����캯��"<<endl;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":"<<z<<endl;
	}
};

void main()
{
	//�ֱ���ò�ͬ�Ĺ��캯��
	A a1;
	A a2(1);
	A a3(1,2);
	A a4(1,2,3);

	a1.disp();
	a2.disp();
	a3.disp();
	a4.disp();


}