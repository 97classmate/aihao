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
//static const成员必须放在类的外部进行初始化
int const A::x=3;

char const A::c='A';
//不管是const static 还是 static const初始化必须放在类的外部

int const A::a=33;
char const A::b='B';

void main()
{
}
