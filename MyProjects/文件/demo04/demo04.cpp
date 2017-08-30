// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

void main()
{
	//建立读文件和写文件
	FILE *readFile,*writeFile;
	char ch;

	//生成2个对象
	readFile=fopen("dd.txt","rt");
	writeFile=fopen("ABC.txt","wt+");
	//判断是否打开成功
	if(readFile==NULL)
	{
		printf("读文件打开失败\n");
		getchar();
		exit(1);
	}
	if(writeFile==NULL)
	{
		printf("写文件打开失败\n");
		getchar();
		exit(1);
	}
//读取文件内容，写到另一个内容中
	printf("文件的内容\n");
  while((ch=fgetc(readFile))!=EOF)
  {
	  //进行屏幕显示
	  putchar(ch);
	  fputc(ch,writeFile);
  }
  printf("\n");


  //关闭俩个文件
	int id1=fclose(readFile);
	int id2=fclose(writeFile);

	//判读是否关闭成功
	if(id1!=0)
	{
		printf("读文件关闭失败\n");
	}
	else
	{
		printf("读文件关闭成功\n");
	}

	if(id2!=0)
	{
		printf("写文件打开失败\n");
	}
	else
	{
		printf("写文件打开成功\n");
	}


}