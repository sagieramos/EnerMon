#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 0;
int main()
{
	int size = 1024;
	ilog fash = ilog(size, WRD);
	cout << ilog::max_length() << endl;
	fash.push("Osas1");
	fash.push("Osas2");
	fash.push("Osas3");
	fash.push("Osas4");
	fash.push("Osas5");

	for (int i = 0; i < size; i++)
	cout << i << " " << fash.wrd_out(i) << endl;

	pos go;

	int y = 0;
	cin >> uu >> y;

	y == 0 ? go = TOP : go = BTM;

	cout << endl;
	fash.resize(uu, go);


	for (int i = 0; i < uu; i++)
	cout << i << " " << fash.wrd_out(i) << endl;


	cout << "\n............................\n";
	return 0;
}
