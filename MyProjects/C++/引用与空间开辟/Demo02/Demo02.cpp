// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	int y;
};

void main()
{
	//һ������ռ�Ŀ��ٺ��ͷ�
	int *p=new int;
	char *c=new char;

	delete p;
	delete c;

     //����Ŀ��ٺ��ͷ�
	int *p2=new int[10];
	for(int i=0;i<10;i++)
	{
		p2[i]=i*2;
		cout<<p2[i]<<"\t";
	}
	cout<<endl;
	delete []p2;

	//����Ŀ��ٺ��ͷ�
	A *pa=new A();
	pa->x=3;
	pa->y=4;
	cout<<pa->x<<":"<<pa->y<<endl;

	//��������Ŀ��ٺ��ͷ�
	A *pb=new A[10];
	delete pa;
	delete []pb;
}




