// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���õĶ�����
//���Զ�һ����������ε�����
void main()
{
	int a=3;
	int &b=a;
	int &c=a;
    cout<<a<<":"<<b<<":"<<c<<endl;
}           