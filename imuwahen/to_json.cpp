#include "imuwahen.h"
#include <sstream>

std::string ilog::to_json(std::string property_name)
{
	std::stringstream ss;

	if (!(property_name.empty()))
		ss << "\"" << property_name << "\":";
	
	ss << "[";

	if(_flag == WORD)
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

std::string ilog::to_json(void)
{
	std::stringstream ss;

	ss << "[";

	if(_flag == WORD)
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
