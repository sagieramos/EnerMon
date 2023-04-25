#include "imuwahen.h"
#include <sstream>

#define NOT_ENOUGH_MEM 8

/**
 * ilog::ilog - initialize an object of the class ilog.
 * @length_of_array: The size of the object.
 * @flag: an enumirated macro: {NUM, WRD}
 * NUM initialized the object to hold number or floating point value,
 * WRD; string.
 *
 * Return: void. 
 */

ilog::ilog(unsigned int length_of_array, flg flag)
	: length_of_array(length_of_array), flag(flag)
{
	if (length_of_array > ILOG_MAX)
		exit(NOT_ENOUGH_MEM);
	if (flag == NUM)
		array = new float[length_of_array];
	else if (flag == WRD)
		s_array = new std::string[length_of_array];
	else{}
}

/**
 * ilog::ilog - initialize an object of the class ilog.
 * @length_of_array: The size of the object.
 *
 * Return: void.
 */

ilog::ilog(unsigned int length_of_array)
	: length_of_array(length_of_array)
{
	if (length_of_array > ILOG_MAX)
		exit(NOT_ENOUGH_MEM);
	flag = NUM;
	array = new float[length_of_array];
}

/**
 * ilog::max_length - return maximum length of a value of an object.
 *
 * Return: ILOG_MAX macro defined
 */

unsigned int ilog::max_length(void)
{
	return ILOG_MAX;
}

/**
 * ilog::~ilog - A destructor. erased object from the heap.
 *
 * Return: void.
 */

ilog::~ilog() 
{
	if (flag == NUM)
		delete array;
	else if(flag == WRD)
		delete[] s_array;
	else {}

}
