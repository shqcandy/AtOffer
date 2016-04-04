/*
 * main.cpp
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */

#include <iostream>
#include "./including/MyString.h"
#include "./including/Single.cpp"
#include "./including/out_functions.h"

using namespace std;

int main()
{
/*
//	MyString string1("Hello");
//	MyString string2 = string1;

	Single s1 = Single::getInstance();
	Single s2 = Single::getInstance();

	cout << &s1 << endl;
	cout << &s2 << endl;

*/
/*
	int rows = 4;
	int column = 4;
	int numbers[][4] =
	{
		{	1 , 2 , 3 , 4},
		{	5 , 6 , 7 , 8},
		{	9 , 10 , 11 , 12},
		{	13 , 14 , 15 , 16}
	};
	bool b = find_num_in_matrix(&numbers[0][0], rows, column, 7);

	cout << b << "\t\t" << rows << "\t\t" << column << endl;
*/


/*
	char string [100] = "Hello World! Hello";
	cout << string << endl;
	replace_string(string , 100);
	cout << string << endl;;
*/

	struct ListNode * my_list = (struct ListNode*)malloc(sizeof(struct ListNode));
	my_list->key = -1;
	my_list->next = NULL;
	struct ListNode * p = my_list;

	for(int i = 0 ; i < 10 ; i ++)
	{
		struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp->key = i;
		temp->next = NULL;

		p->next = temp;
		p = p->next;
	}
	p = my_list;

	tail_to_head_print(p);
}

