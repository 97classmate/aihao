// Demo06.cpp : Defines the entry point for the console application.
//
//������Ҫ��ͷ�ļ�
#include "stdafx.h"
#include "iostream.h"
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	//���ɶ�̬����Ķ���
	vector<int> v;
	//�������
	v.push_back(520);
	v.push_back(025);
	v.push_back(97);
	v.push_back(05);
	v.push_back(022);
	v.push_back(95);
	v.push_back(64);
	v.push_back(52);
	v.push_back(16);
	v.push_back(4);
	v.push_back(56);

	//�����������
	vector<int>::iterator it;
	cout<<"����ǰ������"<<endl;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
	//��������
	sort(v.begin(),v.end());
		cout<<"��ӡһ������������"<<endl;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
	sort(v.begin(),v.end());


}