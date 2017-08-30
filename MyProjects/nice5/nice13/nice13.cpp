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
		printf("请选择你要进行的操作\n");
		printf("添加成绩\n");
		printf("1:去马关玩\n");
		printf("2:去普定玩\n");
		printf("3:去安顺玩\n");
		printf("4:以上地方都不去");

		scanf("%d",&select);
		switch(select)
		{
        case 1:
			printf("请说你去的车费");
			scanf("%d",&id);
			printf("请说你去的车费");
			scanf("%d",&score);
			a[id]=score;
			break;
			 
		case 2:
			printf("请写出去普定的车费");
			scanf("%d",&id);
			a[id]=0;
			break;
		case 3:
			printf("请写出去化处的车费");
			scanf("%d",&id);
			printf("请说明去化处的时间");
			scanf("%d",&score);
			a[id]=score;
			break;
		case 4:
			printf("请写出去玩的人数id\n");
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
