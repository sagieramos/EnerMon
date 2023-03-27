#include "imuwahen.h"

/**
 * ilog::input - shift all the values in the private array of ilog::_arr 
 * to the higher index. insert a floating point number into the index[0].
 * @value: The value; accept either float or string
 *
 * Return: void.
 */

void ilog::input(float value)
{
	if (_flag != NUM)
		return;
	int k = 0;
	float shift[_length_of_array];

	for (unsigned int i = 1; i < _length_of_array; i++)
	{
		shift[i] = _arr[k];
		k++;
	}
	shift[0] = value;
	for (unsigned int i = 0; i < _length_of_array; i++)
		_arr[i] = shift[i];
}

/**
 * ilog::input - shift all the values in the private array of ilog::s_arr 
 * to the higher index. insert a string value into the index[0].
 * @value: The value; accept either float or string
 *
 * Return: void.
 */

void ilog::input(std::string value)
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
 * ilog::input - insert a floating point number into ilog::_arr private array.
 * @value: The value.
 * @index: The index to place the value
 *
 * Return: void.
 */

void ilog::input(float value, unsigned int index)
{
	if(_flag != NUM || (index < 0 || index > _length_of_array))
		return;
	else
		_arr[index] = value;
}

/**
 * ilog::input - insert a string into ilog::s_arr private array.
 * @value: The value.
 * @index: The index to place the value
 *
 * Return: void.
 */

void ilog::input(std::string value, unsigned int index)
{
	if(_flag != WRD || (index < 0 || index > _length_of_array))
		return;
	s_arr[index] = value;
}
