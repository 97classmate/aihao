// �������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//����STL��ͷ�ļ�
#include <list>
using namespace std;

void main()
{
	//����STL����������
	list <char> coll;
	//ѭ��������ֵ
	for(char c='a';c<='z';c++)
	{
		//��ȡ����
		coll.push_back(c);
	}

	//���
	list<char>::const_iterator it;
	// ѭ�����ÿ������
	for(it=coll.begin();it!=coll.end();++it)
	{
		cout<<*it<<"\t";
		
	}
	cout<<endl;
}