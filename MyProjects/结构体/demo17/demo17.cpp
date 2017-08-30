// demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// pypedefÀ´´úÌæint  *
void main()
{
	typedef int *p;
	p p1,p2;
	int x=3;
	int y=4;
	p1=&x;
	p2=&y;
	printf("%d:%d\n",*p1,*p2);
}