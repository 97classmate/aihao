// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//���õĴ����Ե�����
//ͨ���м��������ַ������
void main()
{
	int a=3;
	int *p=&a;

	int *&p2=p;
	cout<<a<<":"<<*p<<":"<<*p2<<endl;

}
