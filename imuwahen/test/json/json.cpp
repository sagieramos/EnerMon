#include <iostream>
#include "../../imuwahen.h"
using namespace std;

string arr[] = {"Stanley", "KingFash", "Dumdum"};
long arr2[] = {30, 32, 20};
int main()
{
	unsigned int n = getArrayLength(arr);
	cout << to_json(arr, n, "Names") << endl;

	n = getArrayLength(arr2);
	cout << to_json(arr2, n, "IDs") << endl;
	return 0;
}
