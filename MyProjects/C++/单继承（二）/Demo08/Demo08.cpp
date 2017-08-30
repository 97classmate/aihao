// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class Father
{
	//父亲的基本属性
	int money;
	char *horse;
	char *car;

public:
	//父亲的构造函数
	Father(){}
	Father(int money,char *horse,char *car)
	{
		//为指针类型开辟空间
		this->horse=new char[20];
		this->car=new char[20];
		this->money=money;
		//strcpy,字符数组的拷贝函数，把后面的内容拷贝到前面的变量中
		strcpy(this->horse,horse);
		strcpy(this->car,car);
	}

	void f1()
	{
		cout<<"留给儿子的，钱"<<money<<endl;
	}

	void f2()
	{
		cout<<"留给儿子使用，房子"<<horse<<endl;
	}

	void f3()
	{
		cout<<"留给儿子使用，汽车"<<car<<endl;
	}
};

//儿子继承父亲，解决了吃的问题，才有了自己的爱好
class Son:public Father
{
	//儿子的爱好
	char *wish1;
	char *wish2;

public:
	Son(){}
	//通过构造函数，构造儿子的对象
	Son(int money,char *horse,char *car,char *wish1,char *wish2):Father(money,horse,car)
	{
		this->wish1=new char[20];
		this->wish2=new char[20];
		this->wish1=wish1;
		this->wish2=wish2;
	}

	void f4()
	{
		cout<<"儿子的第一个爱好"<<wish1<<endl;
	}

	void f5()
	{
		cout<<"儿子的第二个爱好"<<wish2<<endl;
	}
	
	void disp()
	{
		f1();
		f2();
		f3();
		f4();
		f5();

	}
	
};

void main()
{
	//生成对象并打印
	Son s1(500000000,"公寓","宝马","唱歌","跳舞");
	s1.disp();

}





