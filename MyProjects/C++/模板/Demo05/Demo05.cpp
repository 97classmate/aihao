// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

int n;//循环变量

//模板类型定义
template <class T>

class Link
{
	public:
		T num;// 数据域
		Link *next;//地址域
		Link *create();//创建链表
		void print(Link *);//打印链表
		int seek(Link *,T key);// 查找某个值在链表中的位置
};

//注意模板类的成员函数在外面定义的话，函数的书写形式
template <class T>
//进行查找
int Link<T>::seek(Link *p,T key)
{
	Link *pp;
	pp=p;
	n=0;
	while(pp->next!=NULL)// 循环进行查找
	{
		n=n+1;
		if(pp->num==key)
			return n;//如果查找到的话，进行返回
		pp=pp->next;//没有查找到继续开始下一个结点
	}
	return 0;
}

template <class T>
Link<T>* Link<T>::create()//	创建链表
{
	Link *p1,*p2,*head;
	head=p1=p2=new Link;
	cin>>p1->num;
	n=0;

	while(p1->num!=0 )//通过循环进行创建,p1不断开辟空间 p2进行连接 haad代表头结点
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=new Link;
		cin>>p1->num;
//		cout<<p1->num;
	}
	p2->next=NULL;
	return head;
}


template <class T>
void Link<T>::print(Link *p)// 循环打印
{
	Link *pp;
	pp=p;
	while(pp->next!=NULL)
	{
		cout<<pp->num<<"    ";
		pp=pp->next;
	}
	cout<<pp->num<<endl;
}

void main()
{
	//模板类对象的声明
	Link<int> c,*head;
	head=c.create();
	c.print(head);
	int key;
	cin>>key;
	int pos=c.seek(head,key);
	cout<<"第"<<pos<<"个"<<endl;


/*	Link<char> c,*head;
	head=c.create();
	c.print(head);
	char key;
	cin>>key;
	int  pos=c.seek(head,key);
	cout<<pos<<endl;*/
}