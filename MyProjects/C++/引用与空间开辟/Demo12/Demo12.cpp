// Demo12.cpp : Defines the entry point for the console application.
//
//����������ֵ������
#include "stdafx.h"
#include "iostream.h"


int a=3;
int b=4;

//ָ�봫�ݲ��������Ըı��������
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}

int c=3;
int d=4;

//���ô��ݲ��������Ըı��������
void swap2(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}

int e=3;
int f=4;
//��ֵ���߱�������������ԭ��ֵ������һ�ݿ���
void swap3(int x,int y)
{
	int c=x;
	x=y;
	y=c;
}
 

void main()
{
	swap1(&a,&b);
		cout<<a<<":"<<b<<endl;

	swap2(c,d);
		cout<<c<<":"<<d<<endl;
	swap3(e,f);
		cout<<e<<":"<<f<<endl;
}

     

