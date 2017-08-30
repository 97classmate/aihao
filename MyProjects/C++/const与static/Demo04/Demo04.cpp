// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//静态成员有2种访问形式，非静态成员只有一种访问形式
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