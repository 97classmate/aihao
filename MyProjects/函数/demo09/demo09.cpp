// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void main()
{
	//�������飬���Ÿ�ֵ
	char str[50];
	printf("���������������\n");
	//�������ݵ�����
	gets(str);
	//�����ַ����������
	puts(str);
    //���������ı���
	int a=0,b=0,c=0,d=0;
	//ѭ���ҵ�ÿһ���ַ�
	int i=0;
	while(str[i]!='\n')
	{
		printf("%c",str[i]);

		if(str[i]>='0'&&str[i]<='9')//��������ֵĻ�
		{
			a++;
		}
			else if(str[i]>='A'&&str[i]<='Z')//�����.A. ��.Z.�Ļ�
		{
			c++;
		}
        	else if(str[i]>='a'&&str[i]<='z')//�����.a.��.z.�Ļ���
		{
			b++;
		}
		    else//ѭ���ҵ��¸��ַ�
		{
			d++;
		}

			i++;//�ҵ������ַ�
	}
	printf("\n");
		printf("�����ַ��ĸ���:%d\n",a);
		printf("��д�ַ��ĸ���:%d\n",b);
		printf("Сд�ַ��ĸ���:%d\n",c);
		printf("�����ַ��ĸ���:%d\n",d);
}
 