// demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a=3;
	printf("%d\n",a);//ֱ�Ӵ�ȡ�ҵ�ֵ
	printf("%d\n"&a);//ͨ������ӳ���ҵ���ַ
	printf("%d\n",*(&a));//ͨ�����Ѱַ�ҵ�ֵ
}