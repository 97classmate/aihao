// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//�����������������з��ص�����
int a=3;
int b=4;

void f(int &x,int &y)
{
	x++;
	y++;
}


void main()
{
	f(a,b);
	cout<<a<<":"<<b<<endl;
}
