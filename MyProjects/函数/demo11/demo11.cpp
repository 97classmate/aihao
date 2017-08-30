// demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//输入的情况：前面带空格和前面不带空格的情况，如果前面不带空格的话，则需要去掉，
//如果只有一个字符的情况下   A   A，则直接返回1
//如果输入的超过一个字符的话， you like me?  判断的原则是STR[i][i+1]=[空格和[非空格]


//处理函数
int getWord(char str[])
{
	//循环变量
	int i=0;
	int j=0;

   
    //查找输入内容前面的空格数目
    while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			j++;
		}
		else
		{
			break;
		}
		i++;
	}
          // 用i来记录空格的数目，本质是为了保持j的值
		  i=j;

		  //单词数目
		  int num=0;

		  while(str[i]!='\0')
		  {
			  num++;
			  i++;
		  }

	     //如果输入的内容全部为空格的话，则上面循环不会走，num=0，代表没有输入单词
		  if(num==0)
		  {
			  return 0;
		  }
		  else//如果输入了单词
		  {
			  if(num==1)//如果只输入的一个字符，则代表只有一个单词，返回1
			  {
				  return 1;
			  }
			  else//如果输入的字符超过一个的话
			  {
				  int num2=0;//用num2做计数
				  while(str[j+1]!='\0')//向下循环
				  {
					  if(str[j]==' '&&str[j+1]!=' ')//用到了我们刚才的原则 str[j][j+1]=[空格][非空格]
					  {
						  num2++;//进行单词数目的累积
					  }
					  j++;
				  }
				  return num2+1;//由于第一个单词不符合上面的原则，所以上面的算法遗忘了最前一个单词，我们进行+1操作
			  }
		  }
}
void main()
{
	//声明一个字符的数组
	char str[50];
	//向字符中输入内容
	gets(str);
	//统计字符数组的数目
	int num=getWord(str);
	//进行字符数组的打印
	printf("一共有多少单词数目：%d\n",num);
}