// Demo12.cpp : Defines the entry point for the console application.
//
//函数参数传值的例子
#include "stdafx.h"
#include "iostream.h"


int a=3;
int b=4;

//指针传递参数，可以改变参数本身
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}

int c=3;
int d=4;

//引用传递参数，可以改变参数本身
void swap2(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}

int e=3;
int f=4;
//传值不具备互换的条件，原因传值不过是一份拷贝
void swap3(int x,int y)
{
	int c=x;
	x=y;
	y=c;
}
 

void main()
{
	swap1(&a,&b);
		cout<<a<<":"<<b<<endl;

	swap2(c,d);
		cout<<c<<":"<<d<<endl;
	swap3(e,f);
		cout<<e<<":"<<f<<endl;
}

     

