// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue> 
using namespace std;

void main()
{
	//优先队列的使用
	priority_queue<float> q;

	//放入数据
	q.push(11.1);
	q.push(22.2);
	q.push(33.3);

	//取出数据
	cout<<q.top()<<"\t";
	q.pop();
	cout<<q.top()<<"\t";
	q.pop();

	q.push(44.4);
	q.push(55.5);
	q.push(66.6);
	q.pop();

	//通过循环找到所有的数据
	while(!q.epty())
	{
		cout<<q.top()<<"\t";
		q.pop();
	}
	cout<<endl;
}