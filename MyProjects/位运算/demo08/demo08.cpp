// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	int x=15;
	int y=4;//2��2�η�

	//ע�����ȼ�������<<<���ȼ�������ѧ�����
	int z=x&((1<<3)-1);
	printf("%d\n",z);
}