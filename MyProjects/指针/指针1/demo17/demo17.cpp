// demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;

}

void main()
{
	//��������ָ��
	int (*b)(int, int);
	int x=66;
	int y=55;

	//�ú���ָ��ָ�����ĺ���������ʹ�ú����Ǹ������
	b=add;
	int z1=(*b)(x,y);
	b=sub;
	int z2=(*b)(x,y);
	b=mul;
	int z3=(*b)(x,y);

	printf("%d:%d:%d\n",z1,z2,z3);

}
