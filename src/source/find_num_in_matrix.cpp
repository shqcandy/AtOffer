/*
 * find_num_in_matrix.cpp
 *
 *  Created on: 2016年3月14日
 *      Author: Dell
 */

//template <typename T>
#include "../including/out_functions.h"

bool find_num_in_matrix(const int nums[][4] , int & rows , int & columns , const int number)
{
	int row = 0 ;
	int column = columns - 1;
	while(row < rows && column < columns)
	{
		if(nums[row][column] == number)
		{
			rows = row;
			columns = column;
			return true;
		}
		else if(nums[row][column] < number)
		{
			row ++;
		}
		else
		{
			column--;
		}
	}

	return false;
}


