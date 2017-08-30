// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//混合继承的基本书写形式
class A
{
public:

};
class B
{
};

class C
{};

class D
{
};

class E:public A,protected B,private C,public D	
{
};

void main()
{

}