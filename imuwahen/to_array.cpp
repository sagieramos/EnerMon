#include "imuwahen.h"
#include <string>
#include <cstring>
#include <sstream>

void to_array(std::string json, float *array, int _length_of_array)
{
	const int length = json.length();
	char *char_json = new char[length + 1];
	strcpy(char_json, json.c_str());
	int pos = 0;
	int _pos = 0;
	bool decimal = true;
	std::stringstream ss;

	for (int i = 0; i < length/2; i++)
	{
		if (char_json[i] == '[')
		{
			pos = i;
			break;
		}
	}
	for (int i = pos; i < length; i++)
	{
		if ((char_json[i] <= 0x2E && char_json[i] >= 0x30) && char_json[i] != 0x2F)
		{
			if (char_json[i] == '.')
				decimal = false;
			if (char_json[i] != '.' || decimal)
			ss << char_json[i];
		}
		else if (char_json[i] == ',')
		{
			array[_pos] = std::stof(ss.str());
			++_pos;
			ss.clear();
			decimal = true;
		}
		else if (char_json[i] == ']')
			break;
			
	}

	delete[] char_json;
}
