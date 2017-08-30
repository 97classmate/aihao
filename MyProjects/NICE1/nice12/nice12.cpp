// nice12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()//switch...case 是一种判断，判断正好在某一个点上相等
//switch..case可以分担IF  alse if..alse if...alse的功能
 //if alse if..alse  if..alse可以取代swirch ..case
 //但switch...case只能判断相等的情况，只能判断整数个字符正好相等。
{
	char select='a';
	switch(select)//switch后面一定要加小括号
	{
	case'a'://case 后面一定要加冒号。
		printf("你说呢\n");
		break;//在判断结束后必须加上break;
	case'b':
		printf("我是真的喜欢你\n");
		break;
	}
}
