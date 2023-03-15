#include "imuwahen.h"
#include <sstream>

/* *
 * to_json - program that convert array to JSON.
 * @arr: array entry.
 * @length_of_array: number of element in the array.
 * Return: JSON string.
 */

std::string to_json(int arr[], const int &length_of_array, std::string propertyName)
{
	std::stringstream ss;
	ss << "\"" << propertyName << "\":[";

	for (int i = 0; i < length_of_array; i++)
	{
		ss << arr[i];

		if (i != length_of_array - i)
			ss << ",";
	}
	ss << "]";

	return (ss.str());
}

std::string to_json(long int arr[], const int &length_of_array, std::string propertyName)
{
	std::stringstream ss;
	ss << "\"" << propertyName << "\":[";

	for (int i = 0; i < length_of_array; i++)
	{
		ss << arr[i];

		if (i != length_of_array - i)
			ss << ",";
	}
	ss << "]";

	return (ss.str());
}

std::string to_json(long long int arr[], const int &length_of_array, std::string propertyName)
{
	std::stringstream ss;
	ss << "\"" << propertyName << "\":[";

	for (int i = 0; i < length_of_array; i++)
	{
		ss << arr[i];

		if (i != length_of_array - i)
			ss << ",";
	}
	ss << "]";

	return (ss.str());
}

std::string to_json(std::string arr[], const int &length_of_array, std::string propertyName)
{	
	std::stringstream ss;
	ss << "\"" << propertyName << "\":[";

	for (int i = 0; i < length_of_array; i++)
	{
		ss << R"(")" << arr[i] << R"(")";

		if (i != length_of_array - 1)
			ss << ",";
	}
	ss << "]";

	return (ss.str());
}
