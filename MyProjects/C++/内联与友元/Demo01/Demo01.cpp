// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//ȫ�ֺ���������ʹ��
void f1()
{
	cout<<"1111111111"<<endl;
}

inline void f2()
{
	cout<<"2222222222"<<endl;
}

void main()
{
	f1();
	f2();
}