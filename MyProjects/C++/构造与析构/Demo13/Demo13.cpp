// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//���������

class A
{
public:
	int m;
	static int n;//��̬��Ա�ĳ�ʼ�������������

	A(int x)
	{
		m=x;
	}
	void disp()
	{
		cout<<m<<":"<<n<<endl;
	}
};
//����   ��������  ::  �����ֵ
int      A::n=2;


void main()
{
	A a1(3);
	a1.disp();

	A a2(33);
	a2.disp();
}