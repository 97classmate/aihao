// nice21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//二维数组的行列互换
void main()
//二维数组的基本声明
{
	int a[3][4];
  
	//将要被赋值的数组
	int b[4][3];
	//赋值变量
	int num=0;
	//循环进行赋值
	printf("互换前的\n");
	for(int i=0;i<3;i++)
	{
		num++;
		for(int j=0;j<4;j++)
		{
			a[i][j]=num;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("h互换后的\n");
	for(i=0;i<4;i++)
	{
         for(int j=0;j<3;j++)
		 {
			 //b[i][j]=a[j][i]
			 b[i][j]=a[j][i];
			 printf("%d\t",b[i][j]);
		 }
		 printf("\n");
	}
}