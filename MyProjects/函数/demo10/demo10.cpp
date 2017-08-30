// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void main()
{   
	 //先声明2个数组
	char str1[50];
	char str2[50];
	//给第一数组赋值
	printf("请输入原数组内容\n");
	gets(str1);

     int i=0;
	//循环找出内容中的内容，并赋值到第二个数组中 
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		  i++;
	}
	//字符数组的结尾用\0 标识
    	str2[i]='\0';
       //打印字符的长度
	printf("字符数组的长度%d\n",i);

      //打印字符数组的内容
	for(int j=0;j<i;j++)
	{
		printf("%c",str2[j]);
	}
	printf("\n");
}