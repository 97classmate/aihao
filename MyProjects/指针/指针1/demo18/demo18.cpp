// demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



int add(int a,int b)
	{
		return a+b;
	}

	int sub(int a, int b)
	{
		return a-b;
	}

	int pf(int (*p1)(int ,int),int (*p2)(int,int),int a,int b,int c,int d)
	{
		int one=(*p1)(a,b);
		int two=(*p2)(c,d);
		printf("%d:%d\n",one,two);
		printf("%d:%d\n",a+b,c-d);
	 return 0;

	}
	void main()
	{

		int a=1;
		int b=2;
		int c=3;
		int d=4;

		pf(add,sub,a,b,c,d);
	}

