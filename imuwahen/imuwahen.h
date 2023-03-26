#include <string>

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

enum flg {NUM, WRD};
enum pos {TOP, BTM};

template <typename T, int N>
int getArrayLength (T(&)[N])
{
	return N;
}

class ilog
{
	public:
		ilog(unsigned int length_of_array, flg flag);
		ilog(unsigned int length_of_array);

		void input(float value);
		void input(std::string value);

		void input(float value, unsigned int index);
		void input(std::string value, unsigned int index);

		float num_out(unsigned int index);
		std::string wrd_out(unsigned int index);

		void resize(unsigned int size, pos point); 
		void resize(unsigned int size); 
	
		std::string to_json(std::string property_name);
		std::string to_json(void);
		~ilog();

	private:
		unsigned int _length_of_array; //length of array source
		flg _flag;
		float *_arr = NULL; //pointer to array source of float data type
		std::string *s_arr = NULL; //pointer to array source of string data type
};

bool isStringArray(const std::string &json_str);
void to_array(std::string json, float *array, int _length_of_array);
#endif //IMUWAHEN_H
