// Demo02.cpp : Defines the entry point for the console application.
//


/*
 ��ÿ�¹�˾����С��100��ÿ��20��ɣ�����100ÿ��30�����

  */
#include "stdafx.h"
void main()
{
	int a=0,sal=0;
	printf("���������۵����� :");
	scanf("%d",&a);
	if(a<100)
		sal=a*20;
	else
		sal=a*30;
	printf("����Ƕ���: %d\n",sal);
}