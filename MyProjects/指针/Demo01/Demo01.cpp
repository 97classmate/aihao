// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//三种不同的类型的指针，强调各种类似的指针不能混淆

void mian()
{
	//&a整数指针---》》整数地址
  int a=3;

	  printf("%d\n",&a);
	
  bool b=true;

	printf("%d\n",&b);


   char c='a';

	printf("%d\n",&c);

}