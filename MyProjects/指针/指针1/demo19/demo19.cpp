// demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//本例介绍函数返回的三种形式



//返回一般变量
int add1(int a,int b)
{
	return a+b;
}

//返回指针变量
    int c=0;
 int *add2(int a, int b)
 {
	 int c=a+b;
	 return &c;
 }
 //返回引用
 int &add3(int a,int b)
 {
	 int c=a+b;
		 return c;
 }

 void main()
 {
	 int x=3;
	 int y=4;
	 //三个函数的调用
	 int z1=add1(x,y);
	 int  *z2=add2(x,y);
	int z3=add3(x,y);

	 printf("%d\n",z1);
	 printf("%d\n",*z2);
	 printf("%d\n",z3);
 }