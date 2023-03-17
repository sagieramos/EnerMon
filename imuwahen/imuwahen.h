#include <string>

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

template <typename T, int N>
int getArrayLength (T(&)[N])
{
	return N;
}

class ilog
{
	public:
		ilog(float *arr, int length_of_array);
		ilog(bool *arr, int length_of_array);
		ilog(std::string *arr, int length_of_array);
		void insert(float value);
		void insert(std::string value);
		std::string to_json(std::string property_name);
		~ilog();

	private:
		float *_arr;
		std::string *s_arr;
		int _length_of_array;
		bool flag = false;
};

#endif //IMUWAHEN_H
