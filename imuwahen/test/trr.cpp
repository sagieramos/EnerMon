#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 10;
int main()
{
	int size = 5;
	ilog fash = ilog(size);
	fash.input(2);
	fash.input(1);
	fash.input(5);
	fash.input(9);
	fash.input(10);

	fash.resize(uu, TOP);


	for (int i = 1; i < uu+1; i++)
	cout << i << " " << fash.num_out(i) << endl;
	
	return 0;
}
