// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//ȫ�ֺ����ķ���ֵ������
int x;
//����������ֵ�Ļ������ص���ȫ�ֱ���
int &f()
{
	x=4;
	return x;
}

int &f2()
{
	int y=4;//�ֲ���������VC6���棬�������ǲ���ȫ
	return y;
}

void main()
{
	int b=f();
	cout<<b<<endl;
	int c=f2();
	cout<<c<<endl;
}

