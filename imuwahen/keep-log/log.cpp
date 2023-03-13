#include "../imuwahen.h"


void log::insert(int array[], int value, const unsigned int &length_of_array) {
	int shift[length_of_array];
	int k = 0;

	for (unsigned int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		k++;
	}
	shift[0] = value;
	for (unsigned int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

void log::insert(std::string array[], std::string value, const unsigned int &length_of_array) {
	std::string shift[length_of_array];
	int k = 0;

	for (unsigned int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		array[k].clear();
		array[k].resize(0);
		k++;
	}
	shift[0] = value;
	for (unsigned int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

log::~log() {
}
