// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//class ��ı�ʶ����;
class Math
{
public://����������ʹ��
	int num1;// ��Ա���� ����
	int num2;

	// ��Ա���� ����
	int add()
	{
		return num1+num2;
	}
	
	int sub()
	{
		return num1-num2;
	}

	int mul()
	{
		return num1*num2;
	}
	int div()
	{
		return num1/num2;
	}

	void disp()
	{
		cout<<"�ӷ�\t"<<"����\t"<<"�˷�\t"<<"����\t"<<endl;
		cout<<add()<<"\t"<<sub()<<"\t"<<mul()<<"\t"<<div()<<endl;
	}
};


void main()
{
	//ͨ�������ɶ��� ���൱��int a
	Math m1;
	cout<<"�������һ������"<<endl;
	//һ�����������еĳ�Ա��ͨ��
	cin>>m1.num1;

	cout<<"������ڶ�������"<<endl;
	cin>>m1.num2;

	// ����ָ�����
	Math *p=new Math;
	cout<<"�������һ������"<<endl;
	//ָ�����������еĳ�Ա�� ->
	cin>>p->num1;

	cout<<"������ڶ�������"<<endl;
	cin>>p->num2;

	m1.disp();
	p->disp();
}





















