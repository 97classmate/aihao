// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//传值
void  f1(int a,int b)// 安全但是占内存多
{
	int c=a+b;
	printf("%d\n",c);
	
}

	//传地址
void f2(int *a,int *b)
{
	int c=*a+*b;
   printf("%d\n",c);
}
//传引用
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

