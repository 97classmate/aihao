// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
//struct �����ṹ�����͵���ʽ
struct Person
{
	char name[20];
	int age;
	int weight;
	bool sex;
};//ע�⣬�ֺŲ�����ʡ��

struct Car
{
	char type[20];
	int maxSpeed;
	int weight;
};

void main()
{
	//�����ṹ��һ�����
	Person P;
	//���ṹ���ÿһ����Ա���и�ֵ  ���ʳ�Ա����ʽ��һ�������Ա
	strcpy(P.name,"guiizong");
	P.age=30;
	P.weight=80;
	P.sex=true;

	printf("%s:%d:%d:%d\n",P.name,P.age,P.weight,P.sex );
}