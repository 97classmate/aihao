// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//��ֵ
void  f1(int a,int b)// ��ȫ����ռ�ڴ��
{
	int c=a+b;
	printf("%d\n",c);
	
}

	//����ַ
void f2(int *a,int *b)
{
	int c=*a+*b;
   printf("%d\n",c);
}
//������
void f3(int &a,int &b)
{
	int c=a+b;
	printf("%d\n",c);
}

void main()
{
	int x=3;
	int y=4;
	f1(x,y);
	f2(&x,&y);
	f3(x,y);
}

