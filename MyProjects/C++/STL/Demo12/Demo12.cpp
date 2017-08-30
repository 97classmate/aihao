// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

//STLģ�����ݵĴ�ӡ
template<class T>

void print(T& t)
{
	//ͨ��������ӡ
	typename T::const_iterator pos;
	//ѭ������
	for(pos=t.begin();pos!=t.end();++pos)
	{
		cout<<*pos<<"\t";
	}
	cout<<endl;
}
//��ģ���������и�ֵ
template <class T>
void insert(T& t,int from,int to)
{
	//ѭ����ֵ�� from
	for(int i=from;i<=to;i++)
	{
		t.insert(t.end(),i);
	}
}
//����ģ���࣬��ԭʼ�����е����ݽ��иı�
template <class T>
 class A
{
private:
	T t;
public:
	// �������캯��
	A(const T& t)
	{
		this->t=t;
	}

	//���������γɣ����أ����������
	void operator()(T& t1)
	{
		t1=t;//�޸�ԭʼ��ֵ���γ��ۼ�
	}
};

void main()
{
	//������������
		vector<int> v1;
	//��������	
		insert(v1,1,10);
		print(v1);
		//��for_eachʹ�÷�����
		for_each(v1.begin(),v1.end(),A<int>(10));
		print(v1);

		for_each(v1.begin(),v1.end(),A<int>(*v1.begin()));
		print(v1);
}