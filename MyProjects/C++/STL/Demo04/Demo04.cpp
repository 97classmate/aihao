// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int which=28;
	// ���ɶ�̬����Ķ���
	vector<int> v;
	//��������
	for(int i=0;i<10;i++)
	{
		v.push_back(i=4);
	}

	//���ɵ�������find�����Ĳ��ҽ��Ϊ��������
	vector<int>::iterator it;
	//ͨ��find���в���
	it=find(v.begin(),v.end(),which);
	//���Ƿ���ҵ����ҵ���ֵ��Ӧ���±�
	if(it==v.end())
	{
		cout<<"û��������Ԫ��"<<endl;
	}
	else
	{
		cout<<"��������Ӧ��ֵΪ"<<it-v.begin()<<endl;
	}
}
