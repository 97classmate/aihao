// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//����ģ�����Ƶ���������T��Ϊ��������

template <class T>

//�ڱ�����,t��������������������˫���ȵ�����
T add(T a,T b)
{
	return a+b;
}

void main()
{
	int a1=3;
	int b1=4;
	float a2=3.12;
	float b2=4.44;
	double a3=3.111111111111;
	double b3=4.1314520;


	//ģ�庯�����Ա��Զ��ĵ��ã����ݲ�ͬ���ͣ�������Ӧ�Ĳ���
	int c1=add(a1,b1);
	float c2=add(a2,b2);
	double c3=add(a3,b3);

	cout<<c1<<endl;
	cout<<c2<<endl;
	cout<<c3<<endl;
}
