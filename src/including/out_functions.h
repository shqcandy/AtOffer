/*
 * out_functions.h
 *
 *  Created on: 2016年3月14日
 *      Author: Dell
 */

#ifndef INCLUDING_OUT_FUNCTIONS_H_
#define INCLUDING_OUT_FUNCTIONS_H_
bool find_num_in_matrix(const int * nums , int & rows , int & columns , const int number);
void replace_string(char string [] , int length);

struct ListNode
{
	int key;
	ListNode * next;
};
void tail_to_head_print(struct ListNode * list_head);

#endif /* INCLUDING_OUT_FUNCTIONS_H_ */
