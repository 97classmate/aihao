// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

struct Student
{
	char name[20];
	int num;
	int aeg;
	char addr[40];
};

Student s1;
Student *p1;

void main()
{
	FILE *fp;
	char ch;
	int i=1;

	p1=&s1;

	if((fp=fopen("aaa.txt","rb"))==NULL)
	{
		printf("对不起打开失败\n");
		getchar();
		exit(1);

	}
	rewind(fp);

	fseek(fp,sizeof(struct Student),0);
	fread(p1,sizeof(sizeof Student),1,fp);
	printf("%s:%d:%d:%s\n",p1->name,p1->aeg,p1->num,p1->addr);
}
 
