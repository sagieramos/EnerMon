#include "imuwahen.h"
#include <sstream>

ilog::ilog(float *arr, int length_of_array)
	: _arr(arr), _length_of_array(length_of_array)
{flag = false;}

ilog::ilog(std::string *arr, int length_of_array)
	: s_arr(arr), _length_of_array(length_of_array)
{flag = true;}

void ilog::insert(float value)
{
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

void ilog::insert(std::string value)
{
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

std::string ilog::to_json(std::string property_name)
{
	std::stringstream ss;
	ss << "\"" << property_name << "\":[";

	if(flag)
	{
		for (int i = 0; i < _length_of_array; i++)
		{
			ss << R"(")" << s_arr[i] << R"(")";
			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	else
	{
		for (int i = 0; i < _length_of_array; i++)
		{
			ss << _arr[i];

			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	ss << "]";
	return (ss.str());
}

ilog::~ilog() {};
