#include <iostream>
using namespace std;

int main(void)
{
	int max = 0, maxNum = 1;
	int nineInt[9] = { 0 };

	for (int pushInt = 0; pushInt < 9; pushInt++)
		cin >> nineInt[pushInt];

	max = nineInt[0];
	for (int searchInt = 0; searchInt < 9; searchInt++)
	{
		if (nineInt[searchInt] > max)
		{
			max = nineInt[searchInt];
			maxNum = searchInt + 1;
		}
	}
	cout << max << endl << maxNum << endl;

	return 0;
}