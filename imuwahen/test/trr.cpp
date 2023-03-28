#include "../imuwahen.h"
#include <iostream>

using namespace std;
int uu = 3;
int main()
{
	int size = 5;
	ilog fash = ilog(size);
	fash.push(2.5);
	fash.push(1.42);
	fash.push(5.52);
	fash.push(9.01);
	fash.push(10);

	for (int i = 0; i < size; i++)
		cout << i << " " << fash.num_out(i) << " ";

	cout << endl;

	fash.resize(uu, BTM);


	for (int i = 0; i < uu; i++)
	cout << i << " " << fash.num_out(i) << endl;
	
	return 0;
}
