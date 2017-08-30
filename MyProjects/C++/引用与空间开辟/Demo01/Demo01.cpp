// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "malloc.h"
#include "string.h"
#include "stdlib.h"
//声明一个简单的类
class A
{
public:
	int x;
	int y;
};
//主函数
void main()
{
	int *p=NULL;
	char *str=NULL;
	//空间开辟 堆
	p=(int *)malloc(sizeof(int));
	str=(char *)malloc(sizeof(char)*20);
	//如果开辟空间没有失败的话
		if(p!=NULL)
	*p=223;
	else
		exit(1);
	if(str!=NULL)
	   gets(str);
	else
		exit(1);

	cout<<*p<<endl;
	cout<<str<<endl;

//给对象开辟空间
	A *pa=(A *)malloc(sizeof(A));
	if(pa!=NULL)
	{
	pa->x=3;
	pa->y=4;
	cout<<pa->x<<":"<<pa->y<<endl;
	}
	else
	{
		exit(1);
	}
	//释放空间
	free(p);
	free(str);
	free(pa);
}
