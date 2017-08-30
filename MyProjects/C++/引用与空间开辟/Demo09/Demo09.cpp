// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

int a=3;
int b=4;
//指针做参数
void swap1(int *x,int *y)
{
	int temp1=*x;
	int temp2=*y;
	*x=temp2;
	*y=temp1;
}

void main()
{
	swap1(&a,&b);
	cout<<a<<":"<<b<<endl;
}
