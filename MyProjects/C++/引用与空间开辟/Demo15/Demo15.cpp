// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//常引用的问题
void main()
{
	int a=3;

	//常量的引用需要加const
      const int &b=4;
	  //a+1将会出现常量的形式
	  const int &c=a+1;
	  cout<<a<<":"<<b<<":"<<c<<endl;
}