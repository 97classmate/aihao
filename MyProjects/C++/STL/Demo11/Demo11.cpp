// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include<numeric>//mul���������ʶ������

using namespace std;

//����������
int mul(int a ,int b)
{
	return a*b;
}
void main()
{
	//��������
	int a[]={1,2,3,4,5};
	//�������ĳ���
	const int mun=sizeof(a)/sizeof(int);

	//�����ۼ�����         mul-->������������ʹ��
	int sum=accumulate(a,a+mun,1,mul);

	cout<<sum<<endl;
}
