// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//ȫ�ֺ���������Ϊ��Ԫ�ĺ���
class A
{
public:
	friend void   f(A a);
	A(int a,int b)
	{
		x=a;
		y=b;
	}

private:
	int x;
	int y;
};
void f(A a)
{
	//ͨ����Ԫ���Է���˽�еĳ�Ա
	cout<<a.x<<":"<<a.y<<endl;
}
	

void main()
{
	A a(1,2);
	f(a);
}