// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void main()
{
	//声明数组，等着赋值
	char str[50];
	printf("请输入数组的内容\n");
	//进行数据的输入
	gets(str);
	//进行字符数组的输入
	puts(str);
    //声明奇数的变量
	int a=0,b=0,c=0,d=0;
	//循环找到每一个字符
	int i=0;
	while(str[i]!='\n')
	{
		printf("%c",str[i]);

		if(str[i]>='0'&&str[i]<='9')//如果是数字的话
		{
			a++;
		}
			else if(str[i]>='A'&&str[i]<='Z')//如果是.A. 到.Z.的话
		{
			c++;
		}
        	else if(str[i]>='a'&&str[i]<='z')//如果是.a.到.z.的话，
		{
			b++;
		}
		    else//循环找到下个字符
		{
			d++;
		}

			i++;//找到其他字符
	}
	printf("\n");
		printf("数字字符的个数:%d\n",a);
		printf("大写字符的个数:%d\n",b);
		printf("小写字符的个数:%d\n",c);
		printf("其它字符的个数:%d\n",d);
}
 