// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//枚举例子


enum A
{
	x,y,z
};
//先声明类型，再定义变量
void main()
{
	A a1,a2,a3;
	a1=x;
	a2=y;
	a3=z;
	printf("%d:%d:%d\n",a1,a2,a3);
}