// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���Ժ��������Ե��ó�������һ������������ܸ���Ա������ֵ
class A
{
public:
	int x;
	const int y;

	void f1()
	{
         x=3;
		  //y=4;  //һ�㺯�����ܸ���������ֵ

                //һ�㺯�����Ե��ó�����
		cout<<x<<":"<<y<<endl;
	}
	const void f2()
	{
		cout<<x<<":"<<y<<endl;
		x=3;
		//y=4;    ����Ա������ֵ���ܸı�
	}
};

void main()
{
}


