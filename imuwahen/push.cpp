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
	if (_flag != NUM)
		return;
	int k = 0;
	float shift[_length_of_array];

	for (unsigned int i = 1; i < _length_of_array; i++)
		shift[i] = _arr[k++];
	shift[0] = value;
	for (unsigned int i = 0; i < _length_of_array; i++)
		_arr[i] = shift[i];
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
	if (_flag != WRD)
		return;
	int k = 0;
	std::string shift[_length_of_array];

	for (unsigned int i = 1; i < _length_of_array; i++)
	{
		shift[i] = s_arr[k];
		s_arr[k].clear();
		s_arr[k].resize(0);
		k++;
	}
	shift[0] = value;
	for (unsigned int i = 0; i < _length_of_array; i++)
		s_arr[i] = shift[i];
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
	if(_flag != NUM || (index < 0 || index > _length_of_array))
		return;
	else
		_arr[index] = value;
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
	if(_flag != WRD || (index < 0 || index > _length_of_array))
		return;
	s_arr[index] = value;
}
