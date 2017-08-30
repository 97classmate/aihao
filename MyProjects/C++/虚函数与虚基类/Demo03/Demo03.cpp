// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

 class Base
 {
	 int A;
	 int B;
 public:
	 virtual void f()
	 {
	 }

	 virtual void  g()
	 {
	 }

	 virtual void  h()
	 {
	 }

 };

 class Device:public Base
 {
	 int X;
	 int Y;
 public:
	 virtual void f1()
	 {
	 }
	 virtual void g2()
	 {

	 }

	 virtual void h3()
	 {
	 }
 };


 void main()
 {
	 Device d;
 }