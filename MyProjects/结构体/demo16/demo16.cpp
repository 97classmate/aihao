// demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//typedef与数组的连用

void main()
{
    typedef  	char a[200];

	a a1;
	a a2;
	gets(a1);
	gets(a2);
	puts(a1);
	puts(a2);

}