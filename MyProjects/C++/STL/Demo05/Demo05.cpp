// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <vector>

using namespace std;



void disp(vector<int> &v)
{
	cout<<"�Ƿ�Ϊ��"<<!v.empty()<<endl;
	cout<<"���ݶ���"<<v.size()<<endl;
	cout<<"����������"<<v.capacity()<<endl;
	cout<<endl;
}

void main()
{
	//������������
	vector<int> v;
	cout<<"������"<<v.max_size()<<endl;

	//��ʾ����
	disp(v);

	// �������֮��
	v.push_back(11);
	disp(v);
	//������ʾ����
	v.push_back(22);
	
	v.push_back(33);
		
	v.push_back(32);
	disp(v);

	//��������������
	v.push_back(33);
	disp(v);

}
