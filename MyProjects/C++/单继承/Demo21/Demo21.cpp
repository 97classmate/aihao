// Demo21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
    ~A()
	{
		cout<<"����A��"<<endl;
	}
};

class B:public A
{
public:
	~B()
{
	cout<<"����B��"<<endl;
}
};
//���ֵ��þ���������
//�����󳬳����������ڵ�ʱ�򣬻�����𼶵��������������������������û����������������һ�������ĵ���
class C:public B
{
public:
  ~C()
	  {
		  cout<<"����C��"<<endl;
	  }
};

void main()
{
	C c;
}