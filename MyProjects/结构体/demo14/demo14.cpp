// demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

enum A
{
	x,y,z
};
//ö�ٵ�ͬ�����͵ĸ�ֵ��Ҫǿ������ת��
void main()
{
	
   A a1,a2,a3,a4;
   a1=x;
   a2=y;
   a3=(A)a1;
   a4=(A)a2;
	printf("%d:%d:%d:%d\n",a1,a2,a3,a4);
}