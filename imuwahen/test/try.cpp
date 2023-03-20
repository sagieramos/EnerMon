#include "imuwahen.h"
#include <iostream>

using namespace std;
float* arr;
int main()
{
	ilog test = ilog(5, NUMBER);
	test.input(2);
	test.input(3);
	test.input(1);

	test.input(20, 5);
	
	for (int i = 1; i <= 5; i++)
		cout << " " << test.outputN(i);
	cout << endl;

	ilog str = ilog(5, WORD);
	str.input("STan");
	str.input("Osas");
	str.input("Osas", 5);

	for (int i = 1; i <= 5; i++)
		cout << " " << str.outputW(i);
	cout << endl;
	
	cout << test.to_json() << "\n";
	cout << str.to_json() << "\n";

	to_array(test.to_json, arr, 5);
	return 0;
	
}
