// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A(A &a)
	{
		cout<<"������"<<endl;
	}

	void f(A a)//��������
	{
	}

	A f2()//���õĵ���
	{
		A a;
		return a;
	}
	A f3(A a)
	{
		return a;
	}

	A(){}
};

void main()
{
	A a1;//��ʼ����ʱ�򱻵��ÿ������캯��
	A a2(a1);//��ʼ����ʱ����ÿ������캯��
	A a3=a1;

	A a4;
	a1.f(a1);//ͨ����������

	a1.f2();//ͨ������ֵ����

	a1.f3(a4);//�����ͷ���ֵ
}