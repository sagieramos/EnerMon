#include <string>
#include "protos/enermon.pb.h"

#ifndef IMUWAHEN_H
#define IMUWAHEN_H

#define ILOG_MAX 1024

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

		static unsigned int max_length();	

		void push(float value);
		void push(std::string value);

		void push(float value, unsigned int index);
		void push(std::string value, unsigned int index);

		float num_out(unsigned int index);
		std::string wrd_out(unsigned int index);

		void resize(unsigned int size, pos point); 
		void resize(unsigned int size); 
		std::string to_json(std::string property_name);
		std::string to_json(void);
		~ilog();

	private:
		unsigned int length_of_array; //length of array source
		flg flag;
		float *array = NULL; //pointer to array source of float data type
		std::string *s_array = NULL; //pointer to array source of string data 
};

void writeIotDataToEEPROM(const enermon::iotData& obj);
enermon::iotData readIotDataFromEEPROM();

#endif //IMUWAHEN_H
