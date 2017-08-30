// demo05.cpp : Defines the entry point for the console application.
//
//文件内容读入到数组中去
#include "stdafx.h"
#include "stdlib.h"

//把文件的内容读入到字符串中
void main()
{
	FILE *fp;
	char str[50];
	//生成文件指针对象
	if((fp=fopen("ReadMe.txt","rt"))==NULL)//如果为空的话
	{
		printf("打开文件失败\n");
		getchar();
		exit(1);
	}
	else
	{
		//读取
		fgets(str,50,fp);
		//显示
		printf("\n%s\n",str);
		//文件关闭
		int id=fclose(fp);
		if(id!=0)
		printf("关闭失败\n");
		else
			printf("关闭成功\n");
	}
}
