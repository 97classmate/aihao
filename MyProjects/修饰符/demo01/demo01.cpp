// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//本例子不可以运行

int x;//这个变量，保存在全局变量区
int y;
static int z=3;

void mian()
{
	int m=33;//保存在栈区
	int n=44;


	char *p1;
	char *p2;

	char *p="1234567";//文字常量区
	p1=new char[30];//保存在堆区
	p2=p;//保存在文字常量区
}