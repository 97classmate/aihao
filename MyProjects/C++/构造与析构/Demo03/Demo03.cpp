// Demo03.cpp : Defines the entry point for the console application.
//
//��������������ʲô���� 
#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	 A()
	 {
		 cout<<"the object is construct"<<endl;
	 }
		
	 ~A()
		{
			cout<<"�����ͷ�"<<endl;
		}

};

void main()
{
	A a;
	A *p=new A;
	delete p;
}
	 
