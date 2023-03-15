#include <string>

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

template <typename T, int N>
int getArrayLength (T(&)[N])
{
	return N;
}

class log
{
	private:
		unsigned int len;
	public:
		static void insert(size_t arr[], size_t value, const int &length_of_array);
		static void insert(int arr[], int value, const int &length_of_array);
		static void insert(long int arr[], long int value, const int &length_of_array);
		static void insert(long long int arr[], long long int value, const int &length_of_array);
		static void insert(std::string arr[], std::string value, const int &length_of_array);
		~log();
};

std::string to_json(std::string arr[], const int &length_of_array, std::string propertyName);
std::string to_json(int arr[], const int &length_of_array, std::string propertyName);
std::string to_json(long int arr[], const int &length_of_array, std::string propertyName);
std::string to_json(long long int arr[], const int &length_of_array, std::string propertyName);

#endif //IMUWAHEN_H
