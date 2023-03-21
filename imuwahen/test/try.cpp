#include "../imuwahen.h"
#include <iostream>

using namespace std;
float* arr;
int main()
{
	int n = 4;
	ilog fash1 = ilog(n, NUMBER);

	fash1.input(2.543);
	fash1.input(3);
	fash1.input(40);
	fash1.input(30);
	fash1.input(80);
	fash1.input(90);

	for (int i = 1; i <= n; i++)
		cout << " | " << fash1.outputN(i);
	cout << endl;

	ilog str = ilog(9, WORD);

	str.input("Stanley");
	str.input("Kingfash");
	str.input("55");
	str.input("Chinedu");
	str.input("Chinedu-ALX");
	str.input("School", 9);

	for (int i = 1; i <= 9; i++)
		cout << " " << str.outputW(i);
	cout << endl;
	
	cout << fash1.to_json("generator") << "\n";
	cout << str.to_json("users") << "\n";

	//to_array(fash1.to_json, arr, 5);
	return 0;
	
}
