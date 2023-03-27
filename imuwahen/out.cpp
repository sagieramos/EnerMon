#include "imuwahen.h"

/**
* ilog::num_out - print ilog::_arr value. 
* @index: ilog::_arr index to print.
* Return: floating point value.
*/

float ilog::num_out(unsigned int index)
{
	if (index < 0 || index > _length_of_array || _flag != NUM)
		return '\0';
	return (_arr[index]);
}

/**
* ilog::num_out - print ilog::s_arr value. 
* @index: ilog::_arr index to print.
* Return: string value.
*/

std::string ilog::wrd_out(unsigned int index)
{
	if (index < 0 || index > _length_of_array || _flag != WRD)
		return "";
	return (s_arr[index]);
}
