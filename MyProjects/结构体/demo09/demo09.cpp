// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

union A
{
	int a;
	int b;
	int c;
	float x;
};


//�����������ʹ�ã���������һ�������Ҳ��������������󣬻���������ָ�����ͬ�����͵ĳ�Ա���ݿ��Թ���

void main()
{
	A a;
	a.a =3;
	printf("%d\n",a.c);
	
	A b[3];
	b[2].c=3;
	printf("%d\n",b[2].a);        
}