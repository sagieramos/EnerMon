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
		ilog(std::string *arr, int length_of_array);
		void insert(float value);
		void insert(std::string value);
		std::string to_json(std::string property_name);
		std::string to_json(void);
		void to_array(char *json);
		~ilog();

	private:
		float *_arr; //pointer to array source of float data type
		std::string *s_arr; //pointer to array source of string data type
		const int _length_of_array; //length of array source
		
		float *json_to_farr; //pointer to float array from JSON
		std::string *json_to_fstr; //pointer to string array from JSON
		bool flag = false; 
};

bool isStringArray(const std::string &json_str);

#endif //IMUWAHEN_H
