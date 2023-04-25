#include "imuwahen.h"

/**
 * ilog::resize - resize current class object.
 * @new_length: the new size.
 * @point: enumirated macro: {TOP, BTM}. 
 * TOP flag ilog::resize to trim out from the last index if the current object
 * size is greater than the new size. BTM trim out from the first index...
 *
 * Return: void.
 */

void ilog::resize(unsigned int new_length, pos point)
{
	if (new_length < 1 || new_length > ILOG_MAX)
		return;

	unsigned int k = 0;
	const unsigned int n1 = (point == BTM && length_of_array > new_length) ? length_of_array - new_length : 0;
	const unsigned int n2 = point == BTM ? length_of_array : new_length;
	const unsigned int n = length_of_array > new_length ? new_length : length_of_array;

	if (flag == NUM)
	{
		float num[new_length];

		for (unsigned int i = n1; i < n2; i++)
			num[k++] = array[i];
		delete array;
		length_of_array = new_length;
		array = new float[length_of_array];	
		for (unsigned int i = 0; i < n; i++)
			array[i] = num[i];
	}
	else if(flag == WRD)
	{
		std::string wrd[new_length];

		for (unsigned int i = n1; i < n2; i++)
			wrd[k++] = s_array[i];
		delete[] s_array;
		length_of_array = new_length;
		s_array = new std::string[length_of_array];
		for (unsigned int i = 0; i < n; i++)
			s_array[i] = wrd[i];
	}
	else{}
}

/**
 * ilog::resize - resize the size of ilog::_arr or ilog::s_arr.
 * @new_length: the new size.
 *
 * Return: void.
 */

void ilog::resize(unsigned int new_length)
{
	if (new_length < 1 || new_length > ILOG_MAX)
		return;

	unsigned int n = length_of_array > new_length ? new_length : length_of_array;

	if (flag == NUM)
	{
		float num[new_length];

		for (unsigned int i = 0; i < n; i++)
			num[i] = array[i];

		delete array;
		length_of_array = new_length;
		array = new float[length_of_array];
		for (unsigned int i = 0; i < n; i++)
			array[i] = num[i];
	}

	else if(flag == WRD)
	{
		std::string wrd[new_length];

		for (unsigned int i = 0; i < n; i++)
			wrd[i] = s_array[i];
		
		delete[] s_array;
		length_of_array = new_length;
		s_array = new std::string[length_of_array];
		for (unsigned int i = 0; i < n; i++)
			s_array[i] = wrd[i];
	}

}
