#include "imuwahen.h"


void log::insert(int array[], int value, const int &length_of_array) {
	int shift[length_of_array];
	int k = 0;

	for (int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

void log::insert(long int array[], long value, const int &length_of_array) {
	int shift[length_of_array];
	int k = 0;

	for (int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

void log::insert(long long int array[], long long int value, const int &length_of_array) {
	int shift[length_of_array];
	int k = 0;

	for (int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

void log::insert(size_t array[], size_t value, const int &length_of_array) {
	int shift[length_of_array];
	int k = 0;

	for (int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}

void log::insert(std::string array[], std::string value, const int &length_of_array) {
	std::string shift[length_of_array];
	int k = 0;

	for (int i = 1; i < length_of_array; i++) {
		shift[i] = array[k];
		array[k].clear();
		array[k].resize(0);
		k++;
	}
	shift[0] = value;
	for (int i = 0; i < length_of_array; i++)
		array[i] = shift[i];
}
