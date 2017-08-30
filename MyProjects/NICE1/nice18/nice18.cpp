// nice18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	//初始化一个二维数组
	int a[5][5]={
		{11,32,44,56,43},		
		{23,455,21,134,11},
		{0,23,2,3,1},
		{12,987,65,44,32},
		{21,3344,244,22,1}
};
	   //默认第一个数是最大的
	     int max=a[0][0];
		 int x=0;
		 int y=0;
		 //循环进行打印
    for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//循环找出其中的每一个数，进行比较
	 for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			//如果有比第一个大的数，则进行MAX的替换，并保存所在的行列
			if(max<a[i][j])
			{
				max=a[i][j];
					x=i;
				    y=j;
			}
		}
		printf("\n");
	}
	 printf("%d:%d:%d\n",max,x,y);

    
}