// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


static int x=20;
//��̬�ֲ�����ֻ���Ա��ļ��ڲ�ʹ��
void f1()
{
	//��̬�ֲ�����������ȫ�����������ڱ���ʼ��һ��
	static int i=10;
    	i=i+10;
	 cout<<i<<endl;
}

void main()
{
	f1();
	f1();
	f1();
	f1();
}