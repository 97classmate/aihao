// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <vector>
using namespace std;

void main()
{
	//���ɶ����������
	vector<int> intlist;
	int i;
	intlist.push_back(1);//��β���������
	intlist.push_back(2);

	intlist.push_back(3);
    intlist.push_back(4);
    intlist.push_back(5);
	
	//ͨ���±����ʽ�������
	for(i=0;i<5;i++)
	{
		cout<<intlist[i]<<"\t";
	}
	cout<<endl;
	

	//ͨ���±����ʽ�޸�����
	for(i=0;i<5;i++)
	{
		intlist[i]*=2;
	}
	cout<<endl;

	//�����������
	for(i=0;i<5;i++)
	{
		cout<<intlist[i]<<"\t";
	}
	cout<<endl;

	//�����������
	vector<int>::iterator it;
	for(it=intlist.begin();it!=intlist.end();++it)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
//�ҵ�����Ŀ�ʼ����
	it=intlist.begin();
	//��������
	++it;
	++it;
	//�������
	intlist.insert(it,66);
	++it
	intlist.insert(it,666);
	//
	for(it=intlist.begin();it!=intlist.end();++it)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
}
