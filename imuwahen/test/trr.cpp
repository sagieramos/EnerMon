#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 20;
int main()
{
	int size = 5;
	ilog fash = ilog(size);
	fash.input(2.5);
	fash.input(1.42);
	fash.input(5.52);
	fash.input(9.01);
	fash.input(10);

	fash.resize(uu, BTM);


	for (int i = 0; i < uu; i++)
	cout << i << " " << fash.num_out(i) << endl;
	
	return 0;
}
