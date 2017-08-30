// demo06.cpp : Defines the entry point for the console application.
//
//把文件内容写到数组中去（fputs）
#include "stdafx.h"
#include "stdlib.h"

void main()
{
	//生成文件指针
	FILE *fp;
	char ch;
	//将要写入的文件内容
	char *str="www.wangqingwen.com";
	//打开文件
		if((fp=fopen("ReadMe.txt","at+"))==NULL)
		{
			printf("文件打开失败\n");
			getchar();
			exit(1);//失败退出
		}
		else//如果打开成功的话
		{
			fputs(str,fp);// 把字符串的内容写到文件中
			rewind(fp);
			
			//循环读取文件内容
			ch=fgetc(fp);
			while(ch!=EOF)
			{

				putchar(ch);
				ch=fgetc(fp);
			}
			printf("\n");
			//关闭文件
			int id=fclose(fp);
			if(id==0)
			{
				printf("关闭成功\n");
			} 
		  else
		  {
			  printf("关闭失败\n");
		  }


		}
}

