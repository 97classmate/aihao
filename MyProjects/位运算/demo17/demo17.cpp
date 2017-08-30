// demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//十进制按十六进制输出

void printHex(int num)
{
	//28,16进制的数字是7位  毎4位二进制的数表示一个16进制的数
	for(int i=28;i>=0;i=i-4)
	
	{
		int temp=num>>i;//进制移动处理 从高位开始
		temp=temp&15;//求余数

		char ch;
		ch=temp>9?('A'+temp-10):('0'+temp);//如果大于9的话，则说明是ABCDEF	 ，否则是 0 1 2 3 4 5 6 7 8 9
		printf("%c",ch);
	}
	printf("\n");
}

 void main()
 {
	 printf("请输入一个10进制的数\n");
	 int num;
	 scanf("%d",&num);
	 printHex(num);
 }
