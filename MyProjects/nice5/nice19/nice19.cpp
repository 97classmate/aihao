// nice19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//有序的插入数组的例子



void main()

{
	//原始 的有序数组
	int a[10]={1,2,3,4,52,66,79,86,522};
	//输入要输入的数据
	printf("请输入要插入的数据");

		int num;
	scanf("%d",&num);
	//循环找到要插入的位置
	for(int i=0;i<9;i++)
	{
		if(num<a[i])
		{
			pos=i;
			break;
		}
	}
	int pos=i;
	printf("请输入的位置:%d\n",i);
	//吧后面的元素进行平移   a[i]=a[i-1];

	for(i=9;i>num;i--)
	{

		a[i]=a[i-1];
	}
	//把输入插入到要放入的位置 pos >num
	a[pos]=num;
	//进行打印
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}