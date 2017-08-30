// demo03.cpp : Defines the entry point for the console application.
//
//写内容到文件中去例子
#include "stdafx.h"
#include "stdlib.h"
void main()
{
	//生成文件指针对象
	FILE  *fp;
	char ch;

	//打开文件
	if((fp=fopen("cc.txt","wt"))==NULL)//如果打开不成功的话
	{
		printf("文件打开失败\n");
		getchar();
		exit(1);//程序退出
	}
	else//如果成功的话
	{
		printf("清输入一个字符\n");
		ch=getchar();//读取文件内容

	
		//循环进行输出，写文件中
		while(ch!='\n')
		{
			fputc(ch,fp);
			ch=getchar();
		}

		//把文件指针定位到文件的开始位置
		rewind(fp);
		//读处文件内容，在屏幕上进行打印
		ch=fgetc(fp);//从头开始读取
		while(ch!=EOF)//如果不是结束的话，则继续读下去
		{
			putchar(ch);
			ch=fgetc(fp);
		}
		printf("\n");
		int id=fclose(fp);//关闭文件
		if(id==0)
			printf("关闭文件成功");
	}
}
