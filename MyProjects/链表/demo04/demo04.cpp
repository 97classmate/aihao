// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//自己开辟空间
struct A
{
	A *next;

};
void main()
{
	A *a1=new A;
	A *a2=new A;
	A *a3=new A;
	A *a4=new A;
	A *a5=new A;
	A *a6=new A;

	a1->next=&a2;
	a2->next=&a3;
	a3->next=&a4;
	a4->next=&a5;
	a5->next=&a6;
	a6->next=NULL;

     delete a1;//  释放空间
	 delete a2;
	 delete a3;
	 delete a4;
	 delete a5;
	 delete a6;
}