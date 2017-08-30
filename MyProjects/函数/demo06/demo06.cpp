// demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//返回一般地址
int f1(int a,int b)
{
	int c=a+b;
	return c;
}
 //返回地址
int* f2(int a, int b)
{
     int c=a+b;
	 return &c;
}
//返回引用
int &f3(int a, int b)
{
     int c=a+b;
	 return c;
}
//进行具体的调用
void main()
{
	int x=1;
	int y=2;
	int z1=f1(x,y);
	int *z2 = f2(x,y);
	int z3 =f3(x,y);
	printf("%d:%d;%d\n",z1,*z2,z3);
}