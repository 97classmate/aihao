// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	const int y;

	A():y(0)
	{}

	//const��Ա�����ĳ�ʼ����Ҫ�ڹ��캯���ĺ�����ϣ�����ʽ������д��---����ʼ���б�
    A(int a,int b):y(b)//b=y;
	{
		x=a;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
	//��const�ĳ�ԱҲ����ͨ����ʼ������ʽ���г�ʼ����const�ĳ�Ա����ͨ����ʼ�����͵���ʽ������
	A(int a,int b,int c):x(a),y(b)//x=a;y=b
	{
	}
};

void main()
{
	A a1(1,2);
	a1.disp();

	A  a2(33,44,55);
	   a2.disp();
}