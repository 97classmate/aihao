// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;
//����������������������������()
class Sum
{
	int all;
public:
	Sum()
	{
		all=0;
	}

	void operator()(int x)
	{
		all=all+x;
	}

	int getAll()
	{
		return all;
	}
};

void main()
{
	//������������
	vector<int> v1;
	// ѭ����������
	for(int i=1;i<=100;i++)
	{
		v1.push_back(i);
	}

	//ѭ����ͣ�����sum�Ķ���
	Sum s=for_each(v1.begin(),v1.end(),Sum());
	cout<<s.getAll()<<endl;

}
