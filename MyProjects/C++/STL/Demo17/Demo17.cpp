// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;



void main()
{
	// ����vector����
	vector<string> v;
	//�Ѽ��̵Ķ������ݴ洢��vector��
	//�൱���ض���
	copy(istream_iterator<string>(cin),
		istream_iterator<string>(),
		back_inserter(v));
	//��������
	sort(v.begin(),v.end());
	//���п�������vector������cout
	//copy ��������������
	//unique_copy����������������
	unique_copy(v.begin(),v.end(),ostream_iterator<string>(cout,"\n"));
}