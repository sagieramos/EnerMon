#include "imuwahen.h"

/**
 * ilog::push - shift all the values in the current object to the  
 * higher index, then insert a value into the first index.
 * @value: The value; floating point number.
 *
 * Return: void.
 */

void ilog::push(float value)
{
	if (flag != NUM)
		return;
	int k = 0;
	float shift[length_of_array];

	for (unsigned int i = 1; i < length_of_array; i++)
		shift[i] = array[k++];
	shift[0] = value;
	for (unsigned int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

/**
 * ilog::push - shift all the values in the current object to the  
 * higher index, then insert a value into the first index.
 * @value: The value; string.
 *
 * Return: void.
 */

void ilog::push(std::string value)
{
	if (flag != WRD)
		return;
	int k = 0;
	std::string shift[length_of_array];

	for (unsigned int i = 1; i < length_of_array; i++)
	{
		shift[i] = s_array[k];
		s_array[k].clear();
		s_array[k].resize(0);
		k++;
	}
	shift[0] = value;
	for (unsigned int i = 0; i < length_of_array; i++)
		s_array[i] = shift[i];
}

/**
 * ilog::push - insert a value number into the current object.
 * @value: The value; floating point number.
 * @index: The index to place the value
 *
 * Return: void.
 */

void ilog::push(float value, unsigned int index)
{
	if(flag != NUM || (index > length_of_array))
		return;
	else
		array[index] = value;
}

/**
 * ilog::push - insert a value number into the current object.
 * @value: The value. string.
 * @index: The index to place the value
 *
 * Return: void.
 */

void ilog::push(std::string value, unsigned int index)
{
	if(flag != WRD || (index > length_of_array))
		return;
	s_array[index] = value;
}
