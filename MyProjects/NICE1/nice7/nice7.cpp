// nice7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	int b=6;
	int c=a+b;//9
	int d=a-b;//-3
	int e=a*b;//18
    int f=a/b;//0
	int g=a%b;//3
	int h=a++;//3
	int i=++a;//4
	int j=a--;// 先赋值再减减，上面的值是5，所以等于5
	int k=--a;//先减价再赋值，所以就是4-1等于3
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d\n",g);
	printf("%d\n",h);
	printf("%d\n",i);
	printf("%d\n",j);
	printf("%d\n",k);


}
