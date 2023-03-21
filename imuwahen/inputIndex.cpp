#include "imuwahen.h"


void ilog::input(float value, int index)
{
	if(_flag != NUMBER || (index < 1 || index > _length_of_array))
		return;
	else
		_arr[index - 1] = value;
}

void ilog::input(std::string value, int index)
{
	if(_flag != WORD || (index < 1 || index > _length_of_array))
		return;
	s_arr[index - 1] = value;
}

float ilog::outputN(int index)
{
	if (index < 1 || index > _length_of_array)
		return 0;
	return (_arr[index - 1]);
}

std::string ilog::outputW(int index)
{
	if (index < 1 || index > _length_of_array)
		return 0;
	return (s_arr[index - 1]);
}
