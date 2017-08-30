// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//先声明枚举的同时，再去声明变量，并给变量进行赋值

enum A
{
	x,y,z
}a1=x,a2=y,a3=z;

void main()
{
	

	printf("%d:%d:%d\n",a1,a2,a3);
}