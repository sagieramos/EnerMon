#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 3;
int main()
{
	int size = 5;
	ilog fash = ilog(size, WRD);
	fash.input("Osas1");
	fash.input("Osas2");
	fash.input("Osas3");
	fash.input("Osas4");
	fash.input("Osas5");

	fash.resize(uu, BTM);


	for (int i = 1; i < uu+1; i++)
	cout << i << " " << fash.wrd_out(i) << endl;
	
	return 0;
}
