// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//��������������������Ϊ���⺯���Ĳ������ú����Ĳ���������ĺ��������ṩ
//ע��������
bool divby5(int x)
{
	if(x%5==0)
		return true;
	else
		return false;
}

void main()
{
	//����vector���������
	vector<int> v(20);
	for(int i=0;i<v.size();i++)
	{
		v[i]=i+1;
		cout<<v[i]<<"\t";
	}
	cout<<endl;
	//���ɵ�������
	vector<int>::iterator it;

	//���в���                            divby5 �Ǻ���������������ã��ú����Ĳ�����Դ��begin ,end
	it=find_if(v.begin(),v.end(),divby5);

/�������ݽ������
	if(it!=v.end())
	{
		cout<<*it<<endl;
		cout<<it-v.begin()<<endl;

	}

}

