// demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	printf("请输入原始数据和要左移的位数\n");
	int num;
	int k;
	scanf("%d:%d",&num,&k);
	printf("%d:%d\n",num,k);
	int x=num>>(32-k);//把原始数据的高位移动到x的地位中
	int y=num<<k;//把原位数据进行左移
	int z=x|y;// 或运算，把从前的高位放到移动后的地位中
	printf("%d\n",z);
}