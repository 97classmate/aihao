// demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//�������ܺ������ص�������ʽ



//����һ�����
int add1(int a,int b)
{
	return a+b;
}

//����ָ�����
    int c=0;
 int *add2(int a, int b)
 {
	 int c=a+b;
	 return &c;
 }
 //��������
 int &add3(int a,int b)
 {
	 int c=a+b;
		 return c;
 }

 void main()
 {
	 int x=3;
	 int y=4;
	 //���������ĵ���
	 int z1=add1(x,y);
	 int  *z2=add2(x,y);
	int z3=add3(x,y);

	 printf("%d\n",z1);
	 printf("%d\n",*z2);
	 printf("%d\n",z3);
 }