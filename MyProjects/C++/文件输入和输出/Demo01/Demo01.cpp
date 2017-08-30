// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"

void main()
{
	fstream fout1;
	fout1.open("aaa.txt",ios::out);//以可写的形式打开文件 ios::out写  ios:in读
    fstream fout2("bbb.txt",ios::out);
    ofstream out3("ccc.txt",ios::out);//以可写的形式打开文件
	ifstream in3("ddd.txt");//以可读的形式打开文件

	fout1.close();//最后结束的时候，注意关闭文件
	fout2.close();

	out3.close();
	in3.close();
}
