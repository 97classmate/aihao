// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <list>
using namespace std;

void main()
{

	list<char> coll;//���ɶ���
	//ѭ���������
	for(char c='a';c<='z';c++)
	{
		// ��β��׷��Ԫ��
		coll.push_back(c);
	}

	//empty�ж�list�ǲ��ǿյ�
	while(!coll.empty())
	{
		//feont���ص�һ��Ԫ��
		cout<<coll.front()<<"\t";
		//ɾ����һ��Ԫ�أ����ǲ����ص�һ��Ԫ��
		coll.pop_front();
	}
	cout<<endl;
}