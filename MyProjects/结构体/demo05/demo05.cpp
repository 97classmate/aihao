// demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Student
{
	int id;
	char name[20];
	int score;
	int average;
}s2;//在定义结构体后马上声明
struct Student
{
	int id;
	char name[20];
	int score;
	int average;
}s3;//没有结构体的名字，这种方式代表该结构体只声明一个对象，没有名字的结构体，只能通过把实例放在结构体声明的后面
 
  void main()
  {
	  Student s1;// 用类型变量的形式声明
  }