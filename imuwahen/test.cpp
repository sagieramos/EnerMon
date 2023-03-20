#include "imuwahen.h"
#include <iostream>

int main()
{
	std::string arr[3];
	std::string jj = R"(["4", "4", "5"])";
	if (isStringArray(jj))
			std::cout << "Truetttt\n";
	else
		std::cout << "falsetttt\n";
	return 0;
	
	ilog obj = ilog(arr, 3);
	obj.to_array(jj);
}
