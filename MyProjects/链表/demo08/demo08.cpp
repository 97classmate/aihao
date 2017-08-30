// demo08.cpp : Defines the entry point for the console application.
//
//删除链表例子
#include "stdafx.h"
//结点结构
struct Node
{
	int num;
	Node *next;
};

//创建链表
Node *   create()
{
	Node *head,*p1,*p2;
	head=p2=p1=new Node;
	scanf("%d",&p1->num);

	while(p1->num!=0)
	{
		p1=new Node;
		scanf("%d",&p1->num);
		p2->next=p1;
		p2=p1;
	}

	p2->next=NULL;
	return head;
}
//打印链表
void disp(Node *head)
{
	Node *p=head;
	while(p->next!=NULL)
	{
		printf("%d\t",p->num);
		p=p->next;
	}
	if(p->num!=0)
	printf("\n");
}
//删除链表的一个结点
Node* remove(Node *head)
{
	Node *p=head;

	printf("请输入要删除的结点\n");
	int num;
	scanf("%d",&num);

	if(p->num==num)
	{
		printf("删除的是第一个结点\n");
		head=p->next;
		delete p;
		return head;
	}
	else
	{
		bool flag=false;

		while(p->next!=NULL)
		{
			if(p->next->num==num)
			{

				printf("删除的是中间结点\n");
				flag=true;
				Node *del=p->next;
				p->next=p->next->next;
				delete del;
			}
		 p=p->next;
		}

		if(flag==false)
		{
		     Node *del=p->next;
			 del->next=NULL;
	         delete del;
		}
	}	
	return head;
}
//主函数
void main()
{
	Node *head=create();
	disp(head);
	head=remove(head);
    disp(head);
}
