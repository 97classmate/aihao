// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	char str[10];

   str[0]='a';
   str[1]='b';
   str[2]='c';
   str[3]='d';
   str[4]='e';
   str[5]='f';
   str[6]='g';
   str[7]='i';
   str[8]='j';
   str[9]='\0';
   
   for(int i=0;i<10;i++);
   {
	   if(str[i]=='\0');
	   {
		   printf("³¤¶È%d/n",i+1);
	   }
   }
}