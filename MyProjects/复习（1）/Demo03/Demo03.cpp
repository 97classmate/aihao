// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//if eles if else if else����

void main()
{
	int a=0,sal=0;
	printf("���������۵�����: ");
	scanf("%d",&a);

	if(a<100)
		sal=a*10;
	else if(a<200)
		sal=a*25;
	else if(a<300)
		sal=a*30;
	else
		sal=a*50;
	printf("���۵����: %d\n",sal);
}