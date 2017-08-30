// nice9.cpp : Defines the entry point for the console application.
//
//一个三位数，如果是素数，百位数和个位数如果相等的话，则是回文素数
#include "stdafx.h"
 void main()
 {
	 int i=100;
	  do//判断100--1000范围内的所有数，进行穷举，对每一个进行判断
	  {
		  int j=2;
		  bool b=true;
		  do//2--j-2  判断是否是柔数，只能被1和它本身整除的数叫柔数
		  {
              if(i%j==0)// 如果能被整除话，则不是柔数
			  {
				  b=false;
			  }
			  j++;
		  }while(j<i);
		  
		  if(b==true)//如果时候柔数的情况，判断是否是回文
		  {
			  int a=i/100;//求出三位数的百位数
			  int c=i%10;//求出三位数的个位数
			   if(a==c)//如果百位和各位相等的话，则是回文
			   {
				   printf("%d\n",i);
			   }
		  }
		  i++;
	  }while(i<=999);
 }
