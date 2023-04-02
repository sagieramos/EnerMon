#include "../imuwahen.h"
#include <iostream>

using namespace std;
int n = 3;
int main()
{
	int size = 5;
	ilog fash = ilog(size);
	fash.push(2.5);
	fash.push(1.42);
	fash.push(5.52);
	fash.push(9.01);
	fash.push(10);

	fash.push(20.6, 4);

	cout << "Printing all the initial elements in the object\n";
	cout << "\tINDEX	 VALUE\n";
	for (int i = 0; i < size; i++)
		cout << "\t" << i << ":\t" << fash.num_out(i) << "\n";

	cout << R"(
If point is BTM, i.e: fash.resize(n, BTM); it removes elements from the
beginning of the array to fit the new size, and if point is TOP, it 
removes elements from the end of the array to fit the new size.
	)";
	fash.resize(n, BTM);
	
	cout << R"(
Now that we have set point to BTM, it remove elements from the 
beginning of the array to fit the size
)";
	cout << "\tINDEX	 VALUE\n";
	for (int i = 0; i < n; i++)
		cout << "\t" << i << ":\t" << fash.num_out(i) << "\n";
	cout << endl;
	
	cout << "the ilog::to_json() is used to convert current object to JSON string\n";
	cout << "\t" << fash.to_json() << "\n\n";

	cout << "It includes the propety name if it's provided. let name it \"example\"\n";
	cout << "\t" << fash.to_json("example") << "\n";
	
	return 0;
}
