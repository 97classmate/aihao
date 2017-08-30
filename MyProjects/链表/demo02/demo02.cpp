// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//在VC6里面的typedef 可以使用也可以不去使用
typedef struct A
{
	int x;
	char c;
	int *p;
};
 
struct B
{
	int x;
	int y;
	int z;
};

void main()
{
	//声明一般变量
	 A a;
	 a.x=3;
	 a.c='C';
	 a.p=new int;
	 *a.p=4;
	 printf("%d:%c:%d\n",a.x,a.c,*a.p);
	 

	 //声明指针变量
	 A *a2=new A;
     
	 a2->x=33;
	 a2->c='X';
	 a2->p=new int;
	 *a2->p=555;
	 printf("%d:%c:%d\n",a2->x,a2->c,*a2->p);
}


