// demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*wang()// 空函数，没有什么、留着用
{
}
     void main()
	 {
		 int i;
		 i=wang();
	 }

int wang(int qing)
{   
	 
	printf("wang\n");
	return 0;
}*/

int qing(int a, int b)
{
     
	return a+b;
}

void main()
{
	
     int i=qing(2,3);
	 printf("%d\n",i);
}
