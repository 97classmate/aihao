// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
//格式化写入文件，格式化读出文件


//读写的结构
struct Student
{
	char name[20];
	int num;
	int age;
	char addr[40];
};

//s1--》要存入的数据，  s2--->读出数据的存放位置 p1--->数组的指针变量   p2--->数组的指针变量
Student s1[2],s2[2],*p1,*p2;

void main()
{
	FILE *fp;
	char ch;
	int i;

	//分别让P1指向s1，p2指向s2
	p1=s1;
	p2=s2;

	//打开文件
	if((fp=fopen("aaa","wb+"))==NULL)
	{
		printf("创建文件失败\n");
		getchar();
		exit(1);
	}

	//从键盘上输入数据，存放如--》---》s1
	for(i=0;i<2;i++)
	{
		scanf("%s%d%d%s",&p1->name,&p1->num,&p1->age,p1->addr);
		p1++;//注意p1++,否则只写入第一个
	}
	//让p1重新指向数组的第一个元素
	p1=s1;
	//格式化写入文件
	for(i=0;i<2;i++)
	{ 
		fprintf(fp,"%s %d %d %s\n",p1->name,p1->num,p1->age,p1->addr);
		p1++;//从P1读入写到文件中
	}
	 

	//定位文件位置指针
	rewind(fp);

	//循环进行输入  注意name和ADDR的赋值
	for(i=0;i<2;i++)
	{
		fscanf(fp,"%s %d %d %s\n",p2->name,&p2->age,&p2->num,p2->addr);
		p2++;
	}

	//重新定位
	p2=s2;
	//循环输出s2数组的内容
	for(i=0;i<2;i++)
	{
		printf("%s:%d:%d:%s\n",p2->name,p2->age,p2->num,p2->addr);
		p2++;
	}
     
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