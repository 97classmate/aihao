// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��������д�����ʱ��һ��try���Զ�Ӧ��catch,���Կ��������ͬ���͵��쳣
void main()
{
	try
	{
		int x;
		cin>>x;
		if(x==0)
			throw 0;
		if(x==4)
		{
			throw 'A';
		}
		if(x==7)
		{
			throw 3.14159;
		}
	}
	catch(int a)//�����������쳣
	{
		cout<<a<<endl;
	}
	catch(char b)// �����ַ����쳣
	{
		cout<<b<<endl;
	}
	catch(double c)//���ո������ҵ��쳣
	{
		cout<<c<<endl;
	}
}

