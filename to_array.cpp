#include "../imuwahen.h"
#include <string>
#include "rapidjson/document.h"
#include <iostream>

int main() 
{ 
	// Sample JSON string
	std::string json = R"(["apple", "banana", "orange", "grape"])";
	std::string jsonString = "[1.1, 2.3, 2.3, 33.2]";

	// Parse JSON array string into a rapidjson document
	rapidjson::Document docc;
	docc.Parse(json.c_str());

	// Convert JSON array to C++ array
	std::string arr[docc.Size()];

	for (unsigned int i = 0; i < docc.Size(); i++)
		arr[i] = docc[i].GetString();

	for (unsigned int i = 0; i < docc.Size(); i++)
		std::cout << arr[i] << "\n";
//-----------------------------------------------------------------

    	rapidjson::Document doc;
    	doc.Parse(jsonString.c_str());

	if (doc.HasParseError()) {
        std::cout << "Error parsing JSON: " << std::endl;
        return 1;
    }

    	const rapidjson::Value& jsonArray = doc.GetArray();

    	float floatArray[jsonArray.Size()]; //Array declaration

    	for (rapidjson::SizeType i = 0; i < jsonArray.Size(); i++)
		floatArray[i] = jsonArray[i].GetFloat();

    	for (float f : floatArray) 
        	std::cout << f << " ";
    
    	std::cout << std::endl;


	return 0;
}
