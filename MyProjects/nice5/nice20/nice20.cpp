// nice20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//行列互换例子。。。。。

void main()
//二维数组的基本声明
{
	int a[3][4];
	//赋值变量
	int num=0;
	//循环进行赋值
	for(int i=0;i<3;i++)
	{
		num++;
		for(int j=0;j<4;j++)
		{
			a[i][j]=num;
			printf("%d\t",a[i][j]);
		}
		printf("%d\n");
	}
	
}