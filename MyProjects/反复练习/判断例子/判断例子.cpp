// 判断例子.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	bool b1=true;
	bool b2=false;
	bool b3=!b1;// 取反的，真变假，假变真
	 
	 if(b3==true)
	 {
		 printf("真的\n");

	 }
	 else
	 {
		 printf("假的\n");

	 }
	 bool b4=b1&&b2;// 俩个都是真的才是真的，不然就还是假的 。
       if(b4==true)
	   {
		   printf("真的");
	   }
	   else
	   {
		   printf("假的");s

	   }
	   bool b5=b1||b2;//有一个是真就是真的，俩个是真的夜是真，不然就是假的 
	    if(b5==true)
		{
			printf("真的");
		}
		else
		{
			printf("假的");
		}
		 bool b6=b1^b2;//两个是真，次还是真的，不然就是假的！！
          if(b6==true)
		  {
			  printf("真的\n");
		  }
		  else
		  {
			  printf("假的");
		  }
		  
} 


