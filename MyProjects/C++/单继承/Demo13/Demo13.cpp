// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{};

class B
{};

class C
{};

//��ͬȨ�޵ļ̳У���ϼ̳�
class D:public A,protected B,private C
{};

void main()
{
}