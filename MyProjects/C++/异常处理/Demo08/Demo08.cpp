// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//����ָ��Խ����жϣ����쳣����ʽ���д���
int a[]={1,2,3,4,5,6,7,8};


int f(int x)
{
	if(x<0||x>7)
		throw 1;
	throw a[x];
}


void main()
{
	try
	{
		cout<<"a[12]*"<<f(-3)<<endl;
	}
	catch(int i)
	{
		cout<<"����ָ��Խ��"<<endl;
	}
}
