// nice13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	int a[50];
	int id;
	int score;
	int select;
	int i=0;
	
	while(true)
	{
		printf("��ѡ����Ҫ���еĲ���\n");
		printf("��ӳɼ�\n");
		printf("1:ȥ�����\n");
		printf("2:ȥ�ն���\n");
		printf("3:ȥ��˳��\n");
		printf("4:���ϵط�����ȥ");

		scanf("%d",&select);
		switch(select)
		{
        case 1:
			printf("��˵��ȥ�ĳ���");
			scanf("%d",&id);
			printf("��˵��ȥ�ĳ���");
			scanf("%d",&score);
			a[id]=score;
			break;
			 
		case 2:
			printf("��д��ȥ�ն��ĳ���");
			scanf("%d",&id);
			a[id]=0;
			break;
		case 3:
			printf("��д��ȥ�����ĳ���");
			scanf("%d",&id);
			printf("��˵��ȥ������ʱ��");
			scanf("%d",&score);
			a[id]=score;
			break;
		case 4:
			printf("��д��ȥ�������id\n");
			scanf("%d",&id);
			printf("%d",a[id]);
			break;
		case 5:
			 for(i=0;i<5;i++)
			 {
		  printf("%d",a[i]);
			 }
			 printf("\n");
		     break;
		
		case 6:
		
			break;
		
		}   
	}  
}
