#include "imuwahen.h"
#include <sstream>

ilog::ilog(unsigned int length_of_array, flg flag)
	: _length_of_array(length_of_array), _flag(flag)
{
	if (_flag == NUM)
		_arr = new float[_length_of_array];
	if (_flag == WRD)
		s_arr = new std::string[_length_of_array];
}

ilog::ilog(unsigned int length_of_array)
	: _length_of_array(length_of_array)
{
	_flag = NUM;
	_arr = new float[_length_of_array];
}

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

ilog::~ilog() 
{
	if (_flag == NUM)
		delete _arr;
	else if(_flag == WRD)
		delete[] s_arr;
	else {}

}
