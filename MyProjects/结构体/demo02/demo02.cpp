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
	//����ָ�����͵ı������Լ����ٿռ䣬���ʵ�ʱ�䣬����-����Ա
	Person *P=new Person;
	strcpy(P->name,"guiizong");
	P->age=30;
	P->weight=80;
	P->sex=true;

	printf("%s:%d:%d:%d\n",P->name,P->age,P->weight,P->sex );
}