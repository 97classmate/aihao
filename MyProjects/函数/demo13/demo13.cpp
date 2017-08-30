// demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//Ç¶Ì×ÓëµÝ¹éÀý×Ó

void f1()
{
	printf("1111111111111\n");
}

void f2()
{
	f1();
	printf("222222222222222\n");
}

void f3()
{
	f2();
	printf("33333333333333333\n");
}

void f4()
{
	f3();
	printf("44444444444444444444\n");
}


void main()
{
	f4();
}