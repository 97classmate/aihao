// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�����������д�ɳ�Ա��������ʽ
class A
{
public:
	int add(int a,int b)
	{
		return a+b;
	}

	int add(int a,int b,int c)
	{
		return a+b+c;
	}

	float add(float a,float b)
	{
		return a+b;
	}
};
// ��д��ʽ�Ѻã��ɶ���Ҳ�У��������׳���
void main()
{
	int a=3;
	int b=3;
	int c=3;
	float x=1.1314;
	float y=1.214;

	A a1;
	cout<<a1.add(a,b)<<endl;
	cout<<a1.add(a,b,c)<<endl;
	cout<<a1.add(x,y)<<endl;
}
