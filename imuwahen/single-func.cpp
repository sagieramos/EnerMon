#include "imuwahen.h"
#include <sstream>
#include <vector>

//Check if JSON string is a string
bool isStringArray(const std::string &json_str)
{
	std::stringstream ss(json_str);
	std::string token;

	//check if the first token is a '[' character
	std::getline(ss, token, ',');
	if (token.size() > 0 && token[0] == '[')
	{
		// Iterate through the remaining tokens and check if they are strings
		while (std::getline(ss, token, ','))
		{
			if(token.size() > 1 && token[0] == '"' && token[token.size()-1] == '"')
				continue; //Token is a string
			else
				return false; // Token is not a string,
					      // so the JSON is not a string array
		}
		return true; 
	}
			      
	// All token are strings, so the JSON is a string array
	return false;
}
