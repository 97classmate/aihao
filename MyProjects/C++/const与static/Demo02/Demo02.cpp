// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//静态成员变量的共享,多个对象共同使用的一个变量，如果一个变量改变的话，则其他对象也会随着改变
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