// demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//不仅保存下一个结点，还保存另外一个整数值
struct A
{
    A *next;
	int money;
};


void main()
{
	A a1,a2,a3,a4,a5;
	a1.money=1000;
	a2.money=10000;
	a3.money=100000;
    a4.money=1000000;
	a5.money=10000000;

	a1.next=&a2;
	a2.next=&a3;
	a3.next=&a4;
	a5.next=NULL;



	//链表可以通过头结点找到下一个结点
	printf("%d\n",a1.money);
	printf("%d\n",a1.next->money);
	printf("%d\n",a1.next->next->money);
	printf("%d\n",a1.next->next->next->money);
	printf("%d\n",a1.next->next->next->next->money);
	printf("%d:%d:%d:%d:%d\n",a1.money,a2.money,a3.money,a4.money,a5.money);
	printf("%d:%d:%d\n",a2.money,a2.next->money,a2.next->money);
}
