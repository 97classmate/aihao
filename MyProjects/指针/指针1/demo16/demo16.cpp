// demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	char *str=("wang qing wen  yuan lu");
	printf("%c\n",*(str+6));
	while(*str!='\0')
	{
		printf("%c",*str);
		str++;
	}
}