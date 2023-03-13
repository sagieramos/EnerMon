#include "../../imuwahen.h"
#include <iostream>
using namespace std;

int main() {

	static int length_of_array;
	cout << "This program stores values in an array as log. the last value; i.e array[n] is removed for every new entry, while the new value is store at the first index of the array, i.e array[0]\n\n";
	cout << "Enter array length\n";
	cin >> length_of_array;
	string example[length_of_array]; // Array declaration that hold strings
	cout << "\n";
	string value;
	cout << "continue to enter a value,  press ENTER to store the value. if you wanna exit from the program, enter -1\n";
	for(;;)
	{
		cin >> value;
		if(value == "-1") 
		{
			cout << "Program ended\n";
			break;
		}
		cout << "\t";
		log::insert(example, value, length_of_array);

		for (int i = 0; i < length_of_array; i++)
			cout << " " << example[i] << "   ";

	}
        return 0;
}

