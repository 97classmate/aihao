// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
struct Person
{
	char name[20];
	int age;
	int weight;
	bool sex;
};                          

struct Car
{
	char type[20];
	int maxSpeed;
	int weight;
};

void main()
{
	//声明指针类型的变量，自己开辟空间，访问的时间，对象-》成员
	Person *P=new Person;
	strcpy(P->name,"guiizong");
	P->age=30;
	P->weight=80;
	P->sex=true;

	printf("%s:%d:%d:%d\n",P->name,P->age,P->weight,P->sex );
}