// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//����������������أ��Ѻ��������������չ�������ʹ���У���Ķ����൱�ں���������
class A
{
public:
	double operator()(int a,int b);
};

double A::operator ()(int a,int b)
{
	return a+b;
}

void main()
{
	A a;
	int x=a(3,4);
	cout<<x<<endl;
}