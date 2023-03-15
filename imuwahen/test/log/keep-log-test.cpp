#include "../../imuwahen.h"
#include <iostream>
//using namespace std;

int length_of_array;
int main() {

	std::cout << "This program stores values in an array as log. the last value; i.e array[n] is removed for every new entry, while the new value is store at the first index of the array, i.e array[0]\n\n";
	std::cout << "Enter array length\n";
	std::cin >> length_of_array;
	std::string example[length_of_array]; // Array declaration that hold strings
	std::cout << "\n";
	std::string value;
	std::cout << "continue to enter a value,  press ENTER to store the value. if you wanna exit from the program, enter -1\n";
	for(;;)
	{
		std::cin >> value;
		if(value == "-1") 
		{
			std::cout << "Program ended\n";
			break;
		}
		std::cout << "\t";
		log::insert(example, value, length_of_array);

		for (int i = 0; i < length_of_array; i++)
			std::cout << " " << example[i] << " ";
	}
	std::cout << "\n Outputing in Json\n";
	std::cout << to_json(example, length_of_array, "list") <<std::endl;
        return 0;
}

