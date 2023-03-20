#include <iostream>
#include "../imuwahen.h"
#define ARR_SIZE 3
int main()
{
	//Number Test
	float aa[] = {9, 3, 5};
	int n1 = getArrayLength(aa);
	std::cout << "Before insertion: ";
	for (int i = 0; i < n1; i++)
		std::cout << aa[i] << " ";
	std::cout << "\n\n";
	ilog controller = ilog(aa, n1);
	controller.insert(10);
	controller.insert(13);
	
	std::cout << "after inserting 10 & 13 respectively we have: \n";
	for (int i = 0; i < n1; i++)
		std::cout << aa[i] << " ";
	std::cout << "\nConverting to JSON string\n";
	std::cout << controller.to_json() << std::endl;
	std::cout << "\n\n";

	//String controller
	std::string str[] = {"stan", "fash", "dum"};
	int n2 = getArrayLength(aa);
	std::cout << "Before insertion: ";
	for (int i = 0; i < n2; i++)
		std::cout << str[i] << " ";
	std::cout << "\n\n";
	ilog controller2 = ilog(str, n2);
	controller2.insert("kate");
	controller2.insert("franka");

	std::cout << "after inserting 'kate' & 'franka' respectively, we have: \n";
	for (int i = 0; i < 3; i++)
		std::cout << str[i] << " ";
	std::cout << "\nConverting to JSON string\n";
	std::cout << controller2.to_json("T") << "\n";

	return 0;
}
