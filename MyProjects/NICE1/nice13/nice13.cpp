// nice13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int day;//����break��������switch��������������жϣ�ֱ��4������
	scanf("%d",&day);//switch ...case��������������ȵ������
    switch(day)
	{
     case 1:
		  printf("ѧϰ\n");
		  break;
	case 2:
		  printf("��ֱ��\n");
		  break;
    case 3:
		  printf("����Ϸ\n");
		  break;
	case 4:
		  printf("��ȥ��\n");
		  break;
	case 5:
		  printf("����ѧϰ\n");
		  break;
	default://default�൱��else
			  printf("˧\n");
		  break;
	}
}