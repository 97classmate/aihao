// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���ÿ��Զ�δ���
void main()
{
	int a=3;
	int &b=a;
	int &c=b;
    	c=4;
	cout<<a<<":"<<b<<":"<<c<<endl;
}
