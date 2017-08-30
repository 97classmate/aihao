// demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//声明类型的同时，再
enum A
{
	x,y,z
}a1,a2,a3;

void main()
{
	
	a1=x;
	a2=y;
	a3=z;
	printf("%d:%d:%d\n",a1,a2,a3);
}