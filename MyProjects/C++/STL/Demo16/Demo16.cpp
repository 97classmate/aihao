// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <numeric>
using namespace std;

//��ֵ�㷨��������ϰ

void main()
{
	// �γ�����
	int array[]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<"\t";
	}
	cout<<endl;
	// �������Ԫ�صĸ���
	int num=sizeof(array)/sizeof(int);
	//�㡢����������ݷ��뵽vector
	vector<int> v(array,array+num);

	//���
	int value1=accumulate(v.begin(),v.end(),0);
	cout<<value1<<endl;

	//	��ÿһ��Ԫ�صĻ����ϼ�10 ����ȥ���
	int value2=inner_product(v.begin(),v.end(),v.begin(),10);
	cout<<value2<<endl;


		for( i=0;i<5;i++)
		{
		cout<<array[i]<<"\t";
		}
	      cout<<endl;

		  //�ֲ���ͣ���ǰ��������ۼӣ������������õ����ض��������������ݰ󶨵�cout�� �õ�cout��ʱ��������
		  partial_sum(v.begin(),v.end(),ostream_iterator<int>(cout,"\t"));
			  cout<<endl;

			  //����Ԫ�صĲ�ֵ
		  adjacent_difference(v.begin(),v.end(),ostream_iterator<int>(cout,"\t"));
		  cout<<endl;
}

