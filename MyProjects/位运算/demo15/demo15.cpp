// demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ÊýÖµ½»»»

void swap(int a,int b)
{
	a^=b;
	b^=a;//a=b^a^b b^0
	a^=b;//a=a^b a^0
}



void main()
{
	int a=3;
	int b=4;
	printf("%d:%d\n",a,b);
	swap(a,b);
}