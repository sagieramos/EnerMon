#include "imuwahen.h"
#include <sstream>

/**
 * ilog::to_json - convert ilog::_arr or ilog::s_arr to JSON.
 * @property_name: object name.
 *
 * Return: JSON string.
 */

std::string ilog::to_json(std::string property_name)
{
	std::stringstream ss;

	if (!(property_name.empty()))
		ss << "\"" << property_name << "\":";
	
	ss << "[";

	if(_flag == WRD)
	{
		for (unsigned int i = 0; i < _length_of_array; i++)
		{
			ss << R"(")" << s_arr[i] << R"(")";
			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	else
	{
		for (unsigned int i = 0; i < _length_of_array; i++)
		{
			ss << _arr[i];

			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	ss << "]";
	return (ss.str());
}

/**
 * ilog::to_json - convert ilog::_arr or ilog::s_arr to JSON.
 *
 * Return: JSON string.
 */

std::string ilog::to_json(void)
{
	std::stringstream ss;

	ss << "[";

	if(_flag == WRD)
	{
		for (unsigned int i = 0; i < _length_of_array; i++)
		{
			ss << R"(")" << s_arr[i] << R"(")";
			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	else
	{
		for (unsigned int i = 0; i < _length_of_array; i++)
		{
			ss << _arr[i];

			if (i != _length_of_array - 1)
				ss << ",";
		}
	}
	ss << "]";
	return (ss.str());
}
