// demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//系统开辟空间
struct A
{
	A *next;

};
void main()
{
	A a1;
	A a2;
	A a3;
	A a4;
	A a5;
	A a6;

	a1.next=&a2;
	a2.next=&a3;
	a3.next=&a4;
	a4.next=&a5;
	a5.next=&a6;
	a6.next=NULL;
}