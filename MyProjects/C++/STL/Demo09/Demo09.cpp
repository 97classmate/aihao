// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "string.h"
#include "stdlib.h"

using namespace std;
//��ȴ���ĺ����ǣ����ݺʹ����˫�����
void main()
{
	//���ɶ��󲢷���n����
	vector<int> v1;

	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
		cout<<v1[i]<<"\t";
	}

	vector<int> v2;

	for(i=0;i<5;i++)
	{
		v2.push_back(i+2);
			cout<<v2[i]<<"\t";
	}

	vector<int>::iterator it;
	// ���в��Ҳ����ؽ��
	it=search(v1.begin(),v1.end(),v2.begin(),v2.end());

	//���û��ĩβ�Ļ����򷵻����ƥ�俪ʼ�ĵط�
    if(it!=v1.end())
	{
		cout<<it-v1.begin()<<endl;
	}

	//û��ƥ��ɹ�
	else
	{
		cout<<"û�а���Ԫ��"<<endl;
	}
}

