// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// �����쳣����ϰ
int div(int a,int b)
{
	if(b==0)
		throw 1;
	return a/b;
}

void main()
{
	int x;
	int y;

	cin>>x;
	cin>>y;
	int z;

	try
	{
		z=div(x,y);//����div���������쳣������������try������
		cout<<z<<endl;

	}
	catch(int i)
	{
		cout<<"����0�Ĵ���"<<endl;
	}
}
