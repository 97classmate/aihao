// nice10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int pay=5000;//�жϵĸ���ϸ�¡�
	if(pay<3000)
	{
		printf("����");
	}
	else if(pay<7000)
	{
		printf("�������");
	}
	else if(pay<50000)
	{
		printf("С��");
	}
	else if(pay<20000)
	{
		printf("����");
	}
	else if(pay<200000)
	{
		printf("����");
	}
	else
	{
		printf("�����");
	}
}