// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	~A()
	{
		cout<<"����"<<endl;
	}
};
void main()
{
	A a;//һ��������ڽ����������ڵ�ʱ�������������
	A *p=new A;
	delete p;//����һ�������ʱ�������ָ����󣬵���delet�������ϵ�����������
	cout<<"111111111"<<endl;
	cout<<"2222222222222"<<endl;
}