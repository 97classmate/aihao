// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
};
//��Ӽ̳�
class B: public A
{
};
class C: public B
{
};
class D:public C
{};

//���Ӽ̳�
class E 
{};

class Y:public E
{};

void main()
{
}
