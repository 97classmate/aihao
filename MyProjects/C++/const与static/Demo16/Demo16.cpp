// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"11111111111"<<endl;
	}

	void f2() const  //const ����Ҫ�������ں����ĺ���
	{
		cout<<"222222222"<<endl;
	}
};

//constֻ���Է������Լ�
void main()
{
	A a1;
	a1.f1();
	a1.f2();

	const A a2;
	// a2.f1();  const���ܷ���һ�㺯��
}