// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int v;
public:
	A()
	{
		v=0;
	}

	void disp()
	{
		cout<<v<<endl;
	}

	//�Ƚ���++������з��أ���������ֱ�ӽ��з���
    A operator++()
	{
		cout<<"ǰ��"<<endl;
		v++;
		return *this;
	}

	//��������++��ʱ��ͨ�����������͵Ĳ������н綨
	//���õ�++�����ȷ��أ����γɶ��������ں��õ�++�����������˶���

	A operator++(int n)
	{
		cout<<"����"<<endl;
		A a;
		a.v=v++;
		return a;
	}


};


void main()
{
	A a;
	for(int i=0;i<10;i++)
	{
		a++;//����
		a.disp();
	}

	A a2;
	for( i=0;i<5;i++)
	{
		++a2;//ǰ��
		a2.disp();
	}
}
