// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

void main()
{
	//�������󲢷�������
	list<int> ilist;
	for(int i=0;i<20;i++)
	{
		ilist.push_back(i);
		cout<<i<<"\t";
	}

	cout<<endl;

	//ͨ���������в���
	list<int>::iterator it;
	//�ѵ���ָ����ڿ�ʼ��λ��
	it=ilist.begin();
	//�ƶ�����ָ��
	advance(it,15);
	cout<<*it<<endl;

	advance(it,2);
	cout<<*it<<endl;

	advance(it,10);
	cout<<*it<<endl;
}