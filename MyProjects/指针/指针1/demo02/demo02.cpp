// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=2;
	 //声明了一块空间，保存的是a在内存中的地址
	int *b=&a;
	
	char c='A';
	//声明了以块空间，保存C中内存中的地址
	char *d=&c;
}