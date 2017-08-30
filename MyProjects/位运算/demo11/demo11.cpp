// demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//n的相反数

void main()
{
	int x=-31;
	int y=(~x+1);

	int a=31;
	int b=(~a+1);

	printf("%d\n",y);
	printf("%d\n",b);
   
}