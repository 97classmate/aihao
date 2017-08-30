// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
//struct 声明结构体类型的形式
struct Person
{
	char name[20];
	int age;
	int weight;
	bool sex;
};//注意，分号不可以省掉

struct Car
{
	char type[20];
	int maxSpeed;
	int weight;
};

void main()
{
	//声明结构体一般变量
	Person P;
	//给结构体的每一个成员进行赋值  访问成员的形式，一般变量成员
	strcpy(P.name,"guiizong");
	P.age=30;
	P.weight=80;
	P.sex=true;

	printf("%s:%d:%d:%d\n",P.name,P.age,P.weight,P.sex );
}