// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//多次private继承的基本书写格式
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