/*
 * MyString.cpp
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */
#include <string.h>
#include "../including/MyString.h"

MyString::MyString(char * date)
{
	this->date = new char[strlen(date) + 1];
	strcpy(this->date , date);
}

MyString::MyString(const MyString & myString)
{
	this->date = new char[strlen(date) + 1];
	strcpy(this->date , myString.date);
}

MyString::~MyString()
{
	delete this->date;
}

// 需要考虑在对成员函数内部的内容进行赋值之后，原始占用空间的销毁过程
// 使用局部变量在出栈时会自动调用其析构函数的特性进行内存空间的销毁过程
MyString MyString::operator=(const MyString & myString)
{
	if(this != &myString)
	{
		MyString temp(myString);
		char * ptemp = temp.date;
		temp.date = this->date;
		this->date = ptemp;
	}
	return *this;
}
