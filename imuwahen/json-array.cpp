#include "imuwahen.h"
#include <string>
#include <cstring>

void ilog::to_array(char *json)
{
	int count = 0;
	const char* pos = json;

	//finding the beginning of the array
	while (*pos != '[' && *pos != '\0')
		++pos;

	//parse the array
	while (*pos != '\0' && count < _length_of_array)
	{
		//find the beginning of the next value
		while (*pos != '\0' && !isdigit(*pos))
			++pos;
		if (*pos == '\0')
			break;
		//parse the value
		int value = 0;
		while (*pos != '\0' && isdigit(*pos))
		{
			value = value * 10 + (*pos - '0');
			++pos;
		}
		//store the value in the array
		json_to_farr[count++] = value;
	}
}
