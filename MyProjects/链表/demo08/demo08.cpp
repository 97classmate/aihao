// demo08.cpp : Defines the entry point for the console application.
//
//ɾ����������
#include "stdafx.h"
//���ṹ
struct Node
{
	int num;
	Node *next;
};

//��������
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
//��ӡ����
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
//ɾ�������һ�����
Node* remove(Node *head)
{
	Node *p=head;

	printf("������Ҫɾ���Ľ��\n");
	int num;
	scanf("%d",&num);

	if(p->num==num)
	{
		printf("ɾ�����ǵ�һ�����\n");
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

				printf("ɾ�������м���\n");
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
//������
void main()
{
	Node *head=create();
	disp(head);
	head=remove(head);
    disp(head);
}
