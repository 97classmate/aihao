// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()//һ�㺯���ȿ��Ե���һ�㺯����Ҳ���Ե��ó�����
	{
		cout<<"222222222222"<<endl;
		f2();
		f4();
	}

	void f2()
	{
		cout<<"111111111111"<<endl;

	}

	const void f3()//�������ȿ��Ե���һ�㺯����Ҳ���Ե��ó�����
	{
		cout<<"3333333333"<<endl;
		f2();
		f4();
	}

	const void f4()
	{
		cout<<"444444444444"<<endl;
	}
};

void main()
{
}


