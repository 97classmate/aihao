// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	static int y;

	void f1()//�Ǿ�̬��Ա�������Ե��þ�̬��Ա�����ͷǾ�̬��Ա����,Ҳ���Ե��þ�̬�����ͷǾ�̬����
	{
		int x=3;
		int y=4;
		f2();
	}
	void f2()
	{
	}
	static int f3()//�;�̬����ֻ���Ե��þ�̬�����;�̬����
	{
		y=5;
		f4();
	}
	static int f4()
	{
	}
};

void main()
{
}