// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//add	�ĺ�����Ϊ����������ʹ��
//add ������������Ϊ����for_each�����Ĳ���
void add(int &i)
{
	i=i+5;
}
//�������Ϊ������������������д()�����
class Sub:public unary_function<int,void>
{
public:
	void operator()(int &i)
	{
		i=i-5;
	}
};

void main()
{
	// �����������
	int a[]={1,2,34,55,66,77,88};
	//�����ݶ���󶨵���׼����� cout--����ʾ��� _--->��׼���
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;

	for_each(a,a+10,add);//ȫ�ֺ�����Ϊ���󴫵ݸ�for_each
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;
	
	for_each(a,a+10,Sub());
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;
}