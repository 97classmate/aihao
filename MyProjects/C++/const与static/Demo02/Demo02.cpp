// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��̬��Ա�����Ĺ���,�������ͬʹ�õ�һ�����������һ�������ı�Ļ�������������Ҳ�����Ÿı�
class A
{
public:
	int x;
	static int y;

};
int A::y=0;

void main()
{
	A a1;
	a1.y=5;

	A a2;
	a2.y=6;

	cout<<a1.y<<":"<<a2.y<<endl;
}