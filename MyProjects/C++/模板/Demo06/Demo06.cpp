// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//模板类型的定义
template <class T>
//模板类型链表
class List
{
public:
		List();//构造函数
		void Add(T &);//没次调用则添加一个结点
		void Remove(T&);//删除某个结点
		void PrintList();//打印模板链表
		T *Find(T&);//查找某个数据
		~List();//析构函数

protected:
	struct Node//链表的结点
	{
		Node *pNext;//链表的首地址
		T *pT;
	};

	Node *pFirst;
};

template <class T>
 List<T>::List()
{
	pFirst=0;//构造函数中初始化头结点

}

template <class T>
void  List<T>::Add(T& t)//添加一个结点，每次添加到链表的最前面
{
	Node *temp=new Node;//生成新的结点
	temp->pT=&t;//给新的结点进行赋值
	temp->pNext=pFirst;
	pFirst=temp;//让pfirst指向新的结点
}

template <class T>
void List<T>::Remove(T &t)// 删除某一个结点
{
	Node *q=0;//记录要删除的结点
	if(*(pFirst->pT)==t)//如果是删除的是首结点的话，则直接让pFirst指向下一个
	{
		q=pFirst;
		pFirst=pFirst->pNext;
	}
	else//如果删除的结点不是第一个结点的话，则循环进行查找
	{
		for(Node *p=pFirst;p->pNext;p=p->pNext)
		{
			if(*(p->pNext->pT)==t)//如果查找到的话
			{
				q=p->pNext;
				p->pNext=q->pNext;//让结点指向下一个结点的下一个结点	
			 break;//跳出循环
			}
		}
	}

    if(q)// 如果有删除的结点的话进行删除
	{
	    delete q->pT;// 删除结点指针数据
	    delete q;//删除结点
	}

}

template <class T>
T* List<T>::Find(T& t)//循环进行查找
	{
		for(Node *p=pFirst;p;p=p->pNext)
		{
			if(*(p->pT)==t)
			{
				return p->pT;// 如果查找到的话，则进行返回
			}
		}
		return 0;// 查找不到返回0
	}

	template <class T>
	void List<T>::PrintList() //循环打印链表中的数据
	{
		for(Node *p=pFirst;p;p=p->pNext)
		{
			cout<<*(p->pT)<<"  ";
		}
		cout<<endl;
	}

template <class T>
		List<T>::~List()// 析构函数， 析构开辟的结点
	{
		Node *p;
		while(p=pFirst)//循环析构
		{
			pFirst=pFirst->pNext;
			delete p->pT;// 析构结点数据
			delete p;// 析构整个结点
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


		List<int> intList;// 创建整型链表
		for(int i=1;i<7;i++)// 添加7个数据
		{
			intList.Add(*new int (i));
		}

		intList.PrintList();//进行打印

		int x=3;
		intList.Remove(x);//删除其中某个结点，删除结点的值和我们提供值相等
		intList.PrintList();

		int *y=new int(333);
		intList.Add(*y);// 添加结点练习，注意，添加结点是new 出来的结点
		intList.PrintList();
	}
