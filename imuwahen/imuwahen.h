#include <string>

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

class log
{
	private:
		unsigned int len;
	public:
		static void insert(int arr[], int value, const unsigned int &length_of_array);
		static void insert(std::string arr[], std::string value, const unsigned int &length_of_array);
		~log();
};

#endif //IMUWAHEN_H
