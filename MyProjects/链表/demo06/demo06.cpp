// demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
struct Node
{
   Node *next;
   int num;
};



void main()
{
	Node *head1,*head2;
	Node n1,n2,n3,n4,n5;
	Node na,nb,nc,nd,ne;
	
	//带头结点的链表，开辟了空间
	head1=new Node;
	head1->next=n1;

	n1.num=1;n2.num=2;n3.num=3;n4.num=4;n5.num=5;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	n5.next=NULL;

	na.num=1;nb.num=2;nc.num=3;nd.num=4;ne.num=5;
	//没有开辟空间，直接指向了第一个结点。
	head2=&na;
	na.next=&nb;nb.next=&nc;nc.next=&nd;nd.next=&ne;ne.next=NULL;

	
}