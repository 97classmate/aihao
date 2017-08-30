// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
//文件读写例子

void main()
{
	//文件指针
	FILE *fp;
	char ch;
	//打开文件
	if((fp=fopen("cc.txt","rt"))==NULL)//如果失败的话
	{
		printf("打开失败\n");
		getchar();
		exit(1);//程序离开
	}
	else//如果成功的话
	{
		printf("打开成功!\n");
		printf("文件的内容如下...\n\n");
		ch=fgetc(fp);//读取文件内容

		while(ch!=EOF)//EOF 代表文件结束
		{
			putchar(ch);//在屏幕上输出
			ch=fgetc(fp);//读取文件内容
		}
         printf("\n\n");
		//关闭文件
		 int id=fclose(fp);
		 //如果为0 ，那就文件关闭
			if(id==0)
			{
				printf("文件成功关闭\n");
			}
	}
}




