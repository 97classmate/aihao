// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//

void main()
{
	//���������༭����Գ���������ʱ����
	const int &a=3;

	const int b=3;

	const int &x=b;

		cout<<a<<":"<<b<<":"<<x<<endl;

	//���õ�������ʽ����һ����������ñ��������ڶ������ñ�����ַ
	const int * const&c=&b;
	cout<<c<<":"<<&b<<endl;
}
