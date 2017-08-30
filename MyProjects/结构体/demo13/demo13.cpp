// demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

enum A
{
	x=33,y=22,z=101
};

void main()
{
	
   A a1=x,a2=y,a3=z;
	printf("%d:%d:%d\n",a1,a2,a3);
}