/*
 * main.cpp
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */

#include <iostream>
#include "./including/MyString.h"
#include "./including/Single.cpp"
using namespace std;

int main()
{
	MyString string1("Hello");
	MyString string2 = string1;

	Single s1 = Single::getInstance();

	cout << "Hello World!" << endl;
}


