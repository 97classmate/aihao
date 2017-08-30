// nice12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 void main()
{
	int a[5];//数组对象
	int num;
	int num2;
	//循环为数组的元素赋值
	for( int i=0;i<5;i++)
	{
		printf("请添加数组的第%d个元素\n",i+1);
		
		scanf("%d",&num);
		a[i]=num;
	}
	// 删除操作
	printf("请输入要删除的第几个元素");

	scanf("%d",&num);
	a[num]=0;

    //修改操作
	printf("请输入要修改的第几个个数元素");
	scanf("%d",&num);
	printf("请输入要修改的值");

	scanf("%d",&num2);
	a[num]=num2;
	 
	//查找操作

	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}