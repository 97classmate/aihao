// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// 把另一个函数作为另一个函数参数数
int f1(int a, int b)      
{
	return a+b;
}
int c1;
int *f2(int a,int b)
{
    c1=a+b;
	return &c1;
}
int c2;
int &f3(int a,int b)
{
  printf("%d\n",a+b);
  c2=a+b;
	return c2;
}
  void f4(int a,int *b,int &c)   
  {
	  int x=a+*b+c;
	  printf("%d\n",a);
	  printf("%d\n",*b);
	  printf("%d\n",c);
	  printf("%d\n",x);

  }
  void main()
  {
	  int x=3;
	  int y=4;
	  f4(f1(x,y),f2(x,y),f3(x,y));
  }