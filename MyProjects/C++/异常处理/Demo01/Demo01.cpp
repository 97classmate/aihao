// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


void main()
{
	try     //��ʾ�쳣
	{
		int a=3;
		int b;
		cin>>b;

		if(b==0)
		{
			throw 1;//�׳��쳣
		}
		int c=a/b;
		cout<<c<<endl;
	}
	catch(int i)//�����쳣
	{
		cout<<i<<endl;
		cout<<"�����д����Ŷ�ף�"<<endl;
	}

}
