#include <string>

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

enum flg {NUMBER, WORD};

template <typename T, int N>
int getArrayLength (T(&)[N])
{
	return N;
}

class ilog
{
	public:
		ilog(int length_of_array, flg flag);
		ilog(int length_of_array);

		void input(float value);
		void input(std::string value);

		void input(float value, int index);
		void input(std::string value, int index);

		float outputN(int index);
		std::string outputW(int index);
	
		std::string to_json(std::string property_name);
		std::string to_json(void);
		~ilog();

	private:
		const int _length_of_array; //length of array source
		flg _flag;
		float *_arr = NULL; //pointer to array source of float data type
		std::string *s_arr = NULL; //pointer to array source of string data type
};

bool isStringArray(const std::string &json_str);
void to_array(std::string json, float *array, int _length_of_array);
#endif //IMUWAHEN_H
