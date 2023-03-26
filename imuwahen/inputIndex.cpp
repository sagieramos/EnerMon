#include "imuwahen.h"


void ilog::input(float value, unsigned int index)
{
	if(_flag != NUM || (index < 1 || index > _length_of_array))
		return;
	else
		_arr[index - 1] = value;
}

void ilog::input(std::string value, unsigned int index)
{
	if(_flag != WRD || (index < 1 || index > _length_of_array))
		return;
	s_arr[index - 1] = value;
}

float ilog::num_out(unsigned int index)
{
	if (index < 1 || index > _length_of_array || _flag != NUM)
		return '\0';
	return (_arr[index - 1]);
}

std::string ilog::wrd_out(unsigned int index)
{
	if (index < 1 || index > _length_of_array || _flag != WRD)
		return "";
	return (s_arr[index - 1]);
}
