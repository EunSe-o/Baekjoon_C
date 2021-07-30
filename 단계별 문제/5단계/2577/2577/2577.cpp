#include <iostream>
using namespace std;

int main(void)
{
	int nA = 0, nB = 0, nC = 0;
	int mult = 0;
	int whatNum = 0;
	int cntNum[11] = { 0 };
	int result[9] = { 0 };

	cin >> nA >> nB >> nC;
	mult = nA * nB * nC;

	for (int index = 0; mult > 0; index++)
	{
		result[index] = mult % 10;
		cntNum[result[index]]++;
		mult /= 10;
	}

	for (int printCntNum = 0; printCntNum < 10; printCntNum++)
	{
		cout << cntNum[printCntNum] << endl;
	}


	return 0;
}