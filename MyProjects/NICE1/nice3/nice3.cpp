// nice3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 void main()
 {
     int a=6;
	 int *p1=&a;
	printf("%d\n",&a);//д���Ǽ�¼����a�ĵ�ַ
	 printf("%d\n",p1);//˵����*p1��¼��a�ĵ�ַ
	 printf("%d\n",&p1);//˵����p1����ĵ�ַ
	 printf("%d\n",*p1);//˵���˼�¼��a��ֵ
 }
