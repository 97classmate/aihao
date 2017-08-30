// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//ģ�����͵Ķ���
template <class T>
//ģ����������
class List
{
public:
		List();//���캯��
		void Add(T &);//û�ε��������һ�����
		void Remove(T&);//ɾ��ĳ�����
		void PrintList();//��ӡģ������
		T *Find(T&);//����ĳ������
		~List();//��������

protected:
	struct Node//����Ľ��
	{
		Node *pNext;//������׵�ַ
		T *pT;
	};

	Node *pFirst;
};

template <class T>
 List<T>::List()
{
	pFirst=0;//���캯���г�ʼ��ͷ���

}

template <class T>
void  List<T>::Add(T& t)//���һ����㣬ÿ����ӵ��������ǰ��
{
	Node *temp=new Node;//�����µĽ��
	temp->pT=&t;//���µĽ����и�ֵ
	temp->pNext=pFirst;
	pFirst=temp;//��pfirstָ���µĽ��
}

template <class T>
void List<T>::Remove(T &t)// ɾ��ĳһ�����
{
	Node *q=0;//��¼Ҫɾ���Ľ��
	if(*(pFirst->pT)==t)//�����ɾ�������׽��Ļ�����ֱ����pFirstָ����һ��
	{
		q=pFirst;
		pFirst=pFirst->pNext;
	}
	else//���ɾ���Ľ�㲻�ǵ�һ�����Ļ�����ѭ�����в���
	{
		for(Node *p=pFirst;p->pNext;p=p->pNext)
		{
			if(*(p->pNext->pT)==t)//������ҵ��Ļ�
			{
				q=p->pNext;
				p->pNext=q->pNext;//�ý��ָ����һ��������һ�����	
			 break;//����ѭ��
			}
		}
	}

    if(q)// �����ɾ���Ľ��Ļ�����ɾ��
	{
	    delete q->pT;// ɾ�����ָ������
	    delete q;//ɾ�����
	}

}

template <class T>
T* List<T>::Find(T& t)//ѭ�����в���
	{
		for(Node *p=pFirst;p;p=p->pNext)
		{
			if(*(p->pT)==t)
			{
				return p->pT;// ������ҵ��Ļ�������з���
			}
		}
		return 0;// ���Ҳ�������0
	}

	template <class T>
	void List<T>::PrintList() //ѭ����ӡ�����е�����
	{
		for(Node *p=pFirst;p;p=p->pNext)
		{
			cout<<*(p->pT)<<"  ";
		}
		cout<<endl;
	}

template <class T>
		List<T>::~List()// ���������� �������ٵĽ��
	{
		Node *p;
		while(p=pFirst)//ѭ������
		{
			pFirst=pFirst->pNext;
			delete p->pT;// �����������
			delete p;// �����������
		}
	}
	void main()
	{
		/*
		List<float> floatList;
		for(int i=1;i<7;i++)
		{
			floatList.Add(*new  float(i+0.5));
		}

		floatList.PrintList();*/


		List<int> intList;// ������������
		for(int i=1;i<7;i++)// ���7������
		{
			intList.Add(*new int (i));
		}

		intList.PrintList();//���д�ӡ

		int x=3;
		intList.Remove(x);//ɾ������ĳ����㣬ɾ������ֵ�������ṩֵ���
		intList.PrintList();

		int *y=new int(333);
		intList.Add(*y);// ��ӽ����ϰ��ע�⣬��ӽ����new �����Ľ��
		intList.PrintList();
	}
