// demo07.cpp : Defines the entry point for the console application.
//
// 添加结点例子
#include "stdafx.h"

//结点的结构
struct Node
{
 int num;
 Node *next;
};

//生成链表
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
	 printf("%d\t",p->num);
 }

//插入链表
Node* insert(Node *head)
{
	// 形成P保存  head 的结点
	Node *p=head;
	//生成新的结点
	Node *newNode=new Node;
	printf("请输入新结点的值\n");
	scanf("%d",&newNode->num);
	//注意新结点的next域为空，这样安全
	newNode->next=NULL;

	//判断是否是第一个
	if(p->num>newNode->num)
	{
		printf("请插入的结点应该放在第一个上面\n");
		// 保存后续结点
		newNode->next=p;
		//更新head的值
		head=newNode;
	}
	else//如果插入式其他位置的话
	{
		//生成变量，记录是中间结点还是最后一个结点
		bool flag=false;
		//保存头指针
		p=head;
 
		//循环查找
		while(p->next->next!=NULL)
		{
			//如果是中间结点的话，把newNode插入到P的后面，newNode保存P后面的结点
			if(p->next->num>newNode->num)
			{

				printf("插入中间的位置\n");
				newNode->next=p->next;
				p->next=newNode;
				flag=true;
				break;
			}
			p=p->next;
		}
		//如果是最后结点的话
		if(flag==false)
		{
			//把newNode作为最后的结点
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