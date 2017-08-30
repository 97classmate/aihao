// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//复杂 的类型
struct A
{
	int a;
	float b;
	double c;
	char d;
	bool e;
};

struct B
{
	int *p;
	int a[100];
};
struct C
{
	struct D
	{
		int a;
	float b;
	double c;
	char d;
	bool e;
	};


union E

{
	int x;
	char str[100];
	int *p;
};
A a;
B *p;
D d[100];
E e[20];
};

//简单的类型
void main()
{
	int a=3;
	float b=3.333;
	double c=3.3333;
	char d=true;
	bool e=true;
}
