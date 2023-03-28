#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 3;
int main()
{
	int size = 5;
	ilog fash = ilog(size, WRD);
	fash.push("Osas1");
	fash.push("Osas2");
	fash.push("Osas3");
	fash.push("Osas4");
	fash.push("Osas5");

	for (int i = 0; i < size; i++)
	cout << i << " " << fash.wrd_out(i) << endl;

	cout << endl;
	fash.resize(uu, BTM);


	for (int i = 0; i < uu; i++)
	cout << i << " " << fash.wrd_out(i) << endl;
	
	return 0;
}
