/*
 * MyString.h
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */

#ifndef INCLUDING_MYSTRING_H_
#define INCLUDING_MYSTRING_H_
#include <stdlib.h>

class MyString
{
public:
	MyString(char * date = NULL);
	MyString(const MyString & myString);
	~MyString();
	MyString operator=(const MyString & myString);
private:
	char * date;
};

#endif /* INCLUDING_MYSTRING_H_ */
