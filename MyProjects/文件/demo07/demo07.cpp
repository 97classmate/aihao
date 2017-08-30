// demo07.cpp : Defines the entry point for the console application.
//

//本例通过键盘向结构体输入数据，然后存入到文件中，然后从文件中读出来，在显示器上显示

//学生结构体
#include "stdafx.h"
#include "stdlib.h"
struct Student
{
	char name[10];
	int num;
	int age;
	char addr[40];

};

//学生对象 ，S1-->把键盘的数据存入到S1中，s2,把文件的数据读入到S2中
//p1-->s1数组的指针对象 p2-->数组的指针对象
Student s1[2],s2[2],*p1,*p2;

void main()
{
	//文件指针
	FILE *fp;
	char ch;
	int i;
	p1=s1;
	p2=s2;

	if((fp=fopen("wangqqinwen.txt","wb+"))=NULL)
	{
		printf("打开失败\n");
		getchar();
		exit(1);
	}
//向结构体中输入数据
	for(i=0;i,2;i++)
	{
		scanf("%s%d%d%s",p1->name,p1->num,p1->age,p1->addr);
		p1++;
	}
	
	//让P1指向数组的起始位置
	p1=s1;
	// 把数组的内容写入到文件中
	fwrite(p1,sizeof(Student),2,fp);
	 //让文件指针定位到文件的最前面
	rewind(fp);
//从文件中读取数组，写入结构体中
	fread(p2,sizeof(Student),2,fp);
	//循环输出结构体数据中的数据
	for(i=0;i<2;i++)
	{
		printf("%s%d%d%s\n",p2->name,p2->num,p2->age,p2->addr);
		p2++;

	}
	//关闭文件
	int id=fclose(fp);
	//判段关闭状态
	if(id=0)
	{
		printf("关闭成功\n");

	}
	else
	{
		printf("关闭失败\n");
	}
}