// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue> 
using namespace std;

void main()
{
	//���ȶ��е�ʹ��
	priority_queue<float> q;

	//��������
	q.push(11.1);
	q.push(22.2);
	q.push(33.3);

	//ȡ������
	cout<<q.top()<<"\t";
	q.pop();
	cout<<q.top()<<"\t";
	q.pop();

	q.push(44.4);
	q.push(55.5);
	q.push(66.6);
	q.pop();

	//ͨ��ѭ���ҵ����е�����
	while(!q.epty())
	{
		cout<<q.top()<<"\t";
		q.pop();
	}
	cout<<endl;
}