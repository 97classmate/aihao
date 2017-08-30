// demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//十进制转换二进制函数
void printBinary(int num)
{
	for(int i=0;i<32;i++)//循环从高位开始移位
	{
		//31-i 代表移动的位数多少
		int y=(num>>(31-i++))&1;//&1代表求当前最低位置的数据  1&1=1 0&1=0
		printf("%d",y);//打印0和1
	}
	printf("\n");
}




void main()
{
	printf("请输入十进制数据\n");
	int num;
	scanf("%d",&num);
	printBinary(num);
}