// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//��Ա���������������������棬���ǳ�Ա�����Ķ�����Է������������
class A
{
public:
	//������������еĺ���Ĭ��Ϊ����
	void f1()
	{
		cout<<"11111111111"<<endl;
	}
	//����lnline֮�󣬸ú���Ĭ��Ϊ����������Ч�ʻ����
   inline void f2();
};

//�������������沢��Ĭ��������
 inline   void A::f2()
{
	cout<<"aaaaaaaaaaaaaaaaa"<<endl;
}

void main()
{
	A a1;
	a1.f1();
	a1.f2();
}