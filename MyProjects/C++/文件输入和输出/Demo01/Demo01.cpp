// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"

void main()
{
	fstream fout1;
	fout1.open("aaa.txt",ios::out);//�Կ�д����ʽ���ļ� ios::outд  ios:in��
    fstream fout2("bbb.txt",ios::out);
    ofstream out3("ccc.txt",ios::out);//�Կ�д����ʽ���ļ�
	ifstream in3("ddd.txt");//�Կɶ�����ʽ���ļ�

	fout1.close();//��������ʱ��ע��ر��ļ�
	fout2.close();

	out3.close();
	in3.close();
}
