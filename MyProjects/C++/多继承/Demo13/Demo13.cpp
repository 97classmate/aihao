// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//���private�̳еĻ�����д��ʽ
class A
{};

class B
{};

class C
{};

class D
{};

class E:private A,private B,private C,private D
{

};

void main()
{
}