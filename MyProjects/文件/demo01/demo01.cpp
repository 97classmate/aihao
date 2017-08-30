// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
//文件打开和关闭例子

void main()
{
	//文件指针
	FILE *fp;

	//  fopen打开文件   rt  代表只读是的形式
 	if((fp=fopen("cc.txt","rt"))==NULL)
	{
		printf("对不起打开失败\n");
	  getchar();
	 exit(1);//程序离开
	}
	else
	{
		printf("打开成功!\n");
	int r=fclose(fp);//关闭文件
		if(r==0)
			printf("成功关闭!\n");//成功关闭

	}

}