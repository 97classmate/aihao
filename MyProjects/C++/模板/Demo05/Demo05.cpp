// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

int n;//ѭ������

//ģ�����Ͷ���
template <class T>

class Link
{
	public:
		T num;// ������
		Link *next;//��ַ��
		Link *create();//��������
		void print(Link *);//��ӡ����
		int seek(Link *,T key);// ����ĳ��ֵ�������е�λ��
};

//ע��ģ����ĳ�Ա���������涨��Ļ�����������д��ʽ
template <class T>
//���в���
int Link<T>::seek(Link *p,T key)
{
	Link *pp;
	pp=p;
	n=0;
	while(pp->next!=NULL)// ѭ�����в���
	{
		n=n+1;
		if(pp->num==key)
			return n;//������ҵ��Ļ������з���
		pp=pp->next;//û�в��ҵ�������ʼ��һ�����
	}
	return 0;
}

template <class T>
Link<T>* Link<T>::create()//	��������
{
	Link *p1,*p2,*head;
	head=p1=p2=new Link;
	cin>>p1->num;
	n=0;

	while(p1->num!=0 )//ͨ��ѭ�����д���,p1���Ͽ��ٿռ� p2�������� haad����ͷ���
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
void Link<T>::print(Link *p)// ѭ����ӡ
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
	//ģ������������
	Link<int> c,*head;
	head=c.create();
	c.print(head);
	int key;
	cin>>key;
	int pos=c.seek(head,key);
	cout<<"��"<<pos<<"��"<<endl;


/*	Link<char> c,*head;
	head=c.create();
	c.print(head);
	char key;
	cin>>key;
	int  pos=c.seek(head,key);
	cout<<pos<<endl;*/
}