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


//共用体变量的使用，可以声明一般变量，也可以声明数组对象，还可以声明指针对象，同种类型的成员数据可以共享

void main()
{
	A a;
	a.a =3;
	printf("%d\n",a.c);
	
	A b[3];
	b[2].c=3;
	printf("%d\n",b[2].a);        
}