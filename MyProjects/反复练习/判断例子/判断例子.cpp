// �ж�����.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	bool b1=true;
	bool b2=false;
	bool b3=!b1;// ȡ���ģ����٣��ٱ���
	 
	 if(b3==true)
	 {
		 printf("���\n");

	 }
	 else
	 {
		 printf("�ٵ�\n");

	 }
	 bool b4=b1&&b2;// ����������Ĳ�����ģ���Ȼ�ͻ��Ǽٵ� ��
       if(b4==true)
	   {
		   printf("���");
	   }
	   else
	   {
		   printf("�ٵ�");s

	   }
	   bool b5=b1||b2;//��һ�����������ģ����������ҹ���棬��Ȼ���Ǽٵ� 
	    if(b5==true)
		{
			printf("���");
		}
		else
		{
			printf("�ٵ�");
		}
		 bool b6=b1^b2;//�������棬�λ�����ģ���Ȼ���Ǽٵģ���
          if(b6==true)
		  {
			  printf("���\n");
		  }
		  else
		  {
			  printf("�ٵ�");
		  }
		  
} 


