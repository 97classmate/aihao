// demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ʮ���ư�ʮ���������

void printHex(int num)
{
	//28,16���Ƶ�������7λ  ��4λ�����Ƶ�����ʾһ��16���Ƶ���
	for(int i=28;i>=0;i=i-4)
	
	{
		int temp=num>>i;//�����ƶ����� �Ӹ�λ��ʼ
		temp=temp&15;//������

		char ch;
		ch=temp>9?('A'+temp-10):('0'+temp);//�������9�Ļ�����˵����ABCDEF	 �������� 0 1 2 3 4 5 6 7 8 9
		printf("%c",ch);
	}
	printf("\n");
}

 void main()
 {
	 printf("������һ��10���Ƶ���\n");
	 int num;
	 scanf("%d",&num);
	 printHex(num);
 }
