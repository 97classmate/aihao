// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//Ȩ�޼̳з�Ϊ������ʽ
class A
{
};

class B:public A
{
};
class C:protected B
{
};
class D:private C
{
};


void main()
{
}