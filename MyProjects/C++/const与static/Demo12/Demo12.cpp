// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	static const int x;

	static const char c;

	static const int a;

	static const char b;

};
//static const��Ա�����������ⲿ���г�ʼ��
int const A::x=3;

char const A::c='A';
//������const static ���� static const��ʼ�������������ⲿ

int const A::a=33;
char const A::b='B';

void main()
{
}
