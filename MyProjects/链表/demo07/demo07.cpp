// demo07.cpp : Defines the entry point for the console application.
//
// ��ӽ������
#include "stdafx.h"

//���Ľṹ
struct Node
{
 int num;
 Node *next;
};

//��������
Node *create()
{
	Node *p1,*p2,*head;
	head=p2=p1=new Node;
	scanf("%d\n",&p1->num);

	while (p1->num!=0)
	{
		p1=new Node;
		scanf("%d",p1->num);
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
	 printf("%d\t",p->num);
 }

//��������
Node* insert(Node *head)
{
	// �γ�P����  head �Ľ��
	Node *p=head;
	//�����µĽ��
	Node *newNode=new Node;
	printf("�������½���ֵ\n");
	scanf("%d",&newNode->num);
	//ע���½���next��Ϊ�գ�������ȫ
	newNode->next=NULL;

	//�ж��Ƿ��ǵ�һ��
	if(p->num>newNode->num)
	{
		printf("�����Ľ��Ӧ�÷��ڵ�һ������\n");
		// ����������
		newNode->next=p;
		//����head��ֵ
		head=newNode;
	}
	else//�������ʽ����λ�õĻ�
	{
		//���ɱ�������¼���м��㻹�����һ�����
		bool flag=false;
		//����ͷָ��
		p=head;
 
		//ѭ������
		while(p->next->next!=NULL)
		{
			//������м���Ļ�����newNode���뵽P�ĺ��棬newNode����P����Ľ��
			if(p->next->num>newNode->num)
			{

				printf("�����м��λ��\n");
				newNode->next=p->next;
				p->next=newNode;
				flag=true;
				break;
			}
			p=p->next;
		}
		//����������Ļ�
		if(flag==false)
		{
			//��newNode��Ϊ���Ľ��
			p->next=newNode;
		}

	}
	return head;
	
}

 void main()
 {
	 Node  *head=create();
	 disp(head);
	 Node *head2=insert(head);
	 disp(head2);

 }