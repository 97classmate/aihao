// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Node
{
	int num;
	Node *next;

};
  Node *create()
  {
	Node *head,*p1,*p2;
	head=p2=p1=new Node;
	scanf("%d",&p1->num);


	int i=1;
	while(p1->num!=0)
	{
		i++;
		p1=new Node;
		scanf("%d",&p1->num);

		p2->next=p1;
		p2=p1;
	}
        printf("%d\n",i);

	p2->next=NULL;
	return head;
  }

  void print(Node *head)
  {
	  Node *p=head;
	  while(p->next!=NULL)
	  {
		  printf("%d\t",p->num);
		  p=p->next;
	  }
	  printf("\n");
  }
  //从前向后的删除
  void del1(Node *head)
  {
	Node *p=head;
	Node *p2=head->next;

	int i=0;
	while(p->next!=NULL)
	{
		delete p;
		i++;
		p=p2;
		p2=p2->next;
	}
	delete p;
	printf("%d\n",i);

  }

  void main()
  {
	  Node *head=create();
	  print(head);
	  del1(head);
  }