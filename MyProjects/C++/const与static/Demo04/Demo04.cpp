// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//��̬��Ա��2�ַ�����ʽ���Ǿ�̬��Աֻ��һ�ַ�����ʽ
class A
{
public:
	int m;
	static int n;
};

int A::n=0;
void main()
{
	A a1;

	a1.m=3;
	a1.n=4;
	A::n=44;

	A a2;
	cout<<a2.n<<endl;
}