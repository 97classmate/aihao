// demo18.cpp : Defines the entry point for the console application.
//
//求n 中的个数

#include "stdafx.h"
//第一，理解关于10进制在处理二进制运算时间，自动转换为二进制
//第二，理解n &(n-1)结果是去掉最后一个出现的1
//第三，循环可以一直到最后前一个
int count1(int num)
{
	int time=0;//位运算效果比较好
	while(num)
	{
		time++;
		num&=(num-1);
	}
	return time;
}

//十进制转二进制函数
int count2(int num)
{
	int time=0;
	for(int i=0;i<32;i++)//循环从高位开始移位
	{
		//31-i,代表移动的位数多少
		int y=(num>>(31-i))&1;//&1代表求当前最低位置的数据  1&1=1  0&1=0
		if(y==1)
		{
			time++;
		}
		return time;
	}
}

//十进制转换二进制函数
void main()
{
	printf("请输入一个整数\n");//循环从高位开始移位
	int num;
	scanf("%d",&num);
	int all1=count1(num);
	printf("1的总的个数为%d\n",all1);
	int all2=count2(num);
	printf("1的总的个数为%d\n",all2);

}
