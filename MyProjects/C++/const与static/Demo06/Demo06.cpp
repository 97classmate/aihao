// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int x;
	static int y;

	void f1()//һ��ĺ����ȿ��Է��ʾ�̬��Ա��Ҳ���Է��ʷǾ�̬��Ա
	{
		x=3;
		y=4;
	}
	static  void f2()
	{
	//	x=3;//��̬��Ա����ֻ���Է��ʾ�̬��Ա�����������Է��ʷǳ�Ա����
		y=4;
	}
};



void main()
{
}