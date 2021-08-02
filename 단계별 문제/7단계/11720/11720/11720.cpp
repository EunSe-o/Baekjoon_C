#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int howManyNumber = 0, sum=0;
	cin >> howManyNumber;

	int* numArray = new int[howManyNumber];

	for (int index = 0; index < howManyNumber; index++)
		scanf("%1d", &numArray[index]);

	for (int sumNum = 0; sumNum < howManyNumber; sumNum++)
		sum += numArray[sumNum];

	cout << sum;

	return 0;
}