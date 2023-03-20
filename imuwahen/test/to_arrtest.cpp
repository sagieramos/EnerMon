#include "imuwahen.h"
#include <iostream>

using namespace std;
float array[5];
int main()
{
	string name = "[12.4, 32, 58]";
	to_array(name, array, 5);

	cout << array[1] << endl;
	return 0;
}
