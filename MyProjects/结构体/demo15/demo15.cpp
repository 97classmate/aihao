// demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//typedef 和struct的连用

typedef struct A
{
	int x;
	int y;
	int z;
};


void main()
{
	A a;
	a.x=1;
	a.y=2;
	a.z=3;

	printf("%d:%d:%d\n",a.x,a.y,a.z);
}