// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//地址引用的问题

void main()
{
	int a=3;
	// 用const限定引用才能引用地址
      //const	int *&b=&a;
	  int * const &b=&a;
	  cout<<&a<<":"<<b<<endl;


	  //对cocst变量地址的引用将会出现双const的情况
	  const int x=3;
	  const int * const &y=&x;
	  cout<<y<<":"<<&x<<endl;

	  //通过临时变量去引用地址
	  const m=3;
	  const *p=&m;
	  const int *&p2=p;
	  cout<<*p2<<":"<<*p<<endl;

	  cout<<&m<<":"<<p<<endl;
}