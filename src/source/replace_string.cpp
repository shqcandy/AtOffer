/*
 * replace_string.cpp
 *
 *  Created on: 2016年3月14日
 *      Author: Dell
 */
#include "../including/out_functions.h"
void replace_string(char string [] , int length)
{
	int blank = 0;
	int i = 0;
	while(string[i] != '\0')
	{
		if(string[i] == ' ')
			blank++;

		i++;
	}

	int allLength = i + 2 * blank;
	while(i >= 0)
	{
		if(i == allLength)
			break;

		if(string[i] != ' ')
		{
			string[allLength] = string[i];
		}
		else
		{
			string[allLength] = '%';
			allLength--;
			string[allLength] = '0';
			allLength--;
			string[allLength] = '2';
		}
		allLength--;
		i--;
	}
}


