// demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//右循环移位
void main()
{
	printf("%d\n",sizeof(int));
	printf("请输入要移动的数和要移动的位数\n");
	int num;
	int k;
	scanf("%d:%d",&num,&k);
	int low=num<<(32-k);//保存低位的值
	int move=num>>k;//进行移位
	int last=low|move;//进行或运算，把低位的值放到移动后的高位中
	printf("结果是: %d\n",last);
}