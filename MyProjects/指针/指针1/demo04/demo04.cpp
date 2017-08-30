// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{     //第一种形式，系统开辟空间
	//编译器帮我们开辟堆栈空间
	int a=3;
	printf("%d\n",a);
	printf("%d\n",*(&a));
	printf("%d\n",&a);
     
	//第二种形式，把自己的内存保存这个数值（不是地址）
	//自行开辟的堆空间，并放入数值为a
	int *p=new int(3);
	*p=3;
	 //*p开辟空间的首地址  *p 地址只的值，&p没意义
	printf("%d\n"*p);
		printf("%d\n",p);
		printf("%d\n",&p);
	
		
//  第三种形式，自己开辟空间，保存变量地址
	int x=3;
	int *y=&x;
}