#include "imuwahen.h"
#include <sstream>

ilog::ilog(int length_of_array, flg flag)
	: _length_of_array(length_of_array), _flag(flag)
{
	if (_flag == NUMBER)
		_arr = new float[_length_of_array + 1];
	if (_flag == WORD)
		s_arr = new std::string[_length_of_array + 1];
}

ilog::ilog(int length_of_array)
	: _length_of_array(length_of_array)
{
	_flag = NUMBER;
	_arr = new float[_length_of_array];
}

void ilog::input(float value)
{
	if (_flag != NUMBER)
		return;
	int k = 0;
	float shift[_length_of_array];

	for (int i = 1; i < _length_of_array; i++)
	{
		shift[i] = _arr[k];
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < _length_of_array; i++)
		_arr[i] = shift[i];
}

void ilog::input(std::string value)
{
	if (_flag != WORD)
		return;
	int k = 0;
	std::string shift[_length_of_array];

	for (int i = 1; i < _length_of_array; i++)
	{
		shift[i] = s_arr[k];
		s_arr[k].clear();
		s_arr[k].resize(0);
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < _length_of_array; i++)
		s_arr[i] = shift[i];
}

ilog::~ilog() 
{
	if (_flag == NUMBER)
		delete _arr;
	else if(_flag == WORD)
		delete[] s_arr;
	else {}

}
