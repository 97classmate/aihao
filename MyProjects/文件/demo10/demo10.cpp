// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


//做一个判断函数，由于要多次调用
void judge(int id)
{
	if(id>1)
		printf("文件结束\n");
	else
		printf("文件没有结束\n");
}

void main()
{
	//生成文件的结构指针
	FILE *fp;
	//以读的形式开始进行
	fp=fopen("Readme.txt","r");
	//判断是否生成
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		getchar();
		exit(1);
	}
	 //判断文件指针是否结束
	int id=feof(fp);
	judge(id);
	//定位之后进行判断
	fseek(fp,0,SEEK_END);
	id=feof(fp);
	judge(id);

	//把文件指针定位到文件的最开始位置
	fseek(fp,0,SEEK_SET);
	char ch;
	ch=fgetc(fp);
	//循环读出文件内容，读取结束后继续进行判断
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
		id=feof(fp);
		judge(id);
}












