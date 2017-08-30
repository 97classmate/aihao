// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//共用体嵌套定义
union A
{
	union B
	{
		int x;
		int y;
		int z;
	};

	int a;
	int b;
	int c;
};

union C
{
	int x;
	int y;
};
union D
{
	C c;
	int m;
	int n;
};


void main()
{}


