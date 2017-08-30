// nice3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 void main()
 {
     int a=6;
	 int *p1=&a;
	printf("%d\n",&a);//写的是记录本身a的地址
	 printf("%d\n",p1);//说明了*p1记录了a的地址
	 printf("%d\n",&p1);//说明了p1本身的地址
	 printf("%d\n",*p1);//说明了记录了a的值
 }
