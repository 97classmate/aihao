// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��̬����ͨ����Ա��������ʵ�֣���ͬһ����Χ�ڣ������ĺ��������أ�����ʵ�ֵ��Ǿ�̬����
class Hath
{
public:
	int add(int a,int b)
	{
		return a+b;
	}
	int add(int a,int b,int c)
	{
		return a+b+c;
	}
};

void main()
{
	Haht m;
	cout<<m.add(1,1)<<endl;
	cout<<m.daa(1,1,1)<<endl;
}

