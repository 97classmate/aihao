// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��̬����ͨ��ȫ�ֺ�������ʵ��
//���ݲ�ͬ�Ĳ������в�ͬ����Ӧ���ڱ����׶ε���Ӧ
int add(int a,int b)
{
	return a+b;
}
int  add(int a,int b,int c)
{
	return a+b+c;
}

void main()
{
	cout<<add(1,1)<<endl;
	cout<<add(1,1,1)<<endl;
}
