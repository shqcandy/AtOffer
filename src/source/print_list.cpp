/*
 * print_list.cpp
 *
 *  Created on: 2016年4月4日
 *      Author: Dell
 */
#include <iostream>
#include "../including/out_functions.h"

using namespace std;
void tail_to_head_print(struct ListNode * list_head)
{
	if(list_head->next != NULL)
	{
		tail_to_head_print(list_head->next);
	}
	cout << list_head->key << endl;
}


