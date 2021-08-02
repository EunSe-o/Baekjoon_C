#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int first[3] = { 0 };
	int second[3] = { 0 };
	int temp[3] = { 0 };

	for (int inputData = 0; inputData < 3; inputData++)
		scanf("%1d", &first[inputData]);
	for (int inputData = 0; inputData < 3; inputData++)
		scanf("%1d", &second[inputData]);

	copy(first, first + 3, temp);
	for (int changeData = 0; changeData < 3; changeData++)
	{
		first[changeData] = temp[2 - changeData];
	}

	copy(second, second + 3, temp);
	for (int changeData = 0; changeData < 3; changeData++)
	{
		second[changeData] = temp[2 - changeData];
	}

	if (100 * first[0] + 10 * first[1] + first[2]
	> 100 * second[0] + 10 * second[1] + second[2])
		cout << first[0] << first[1] << first[2];

	else if (100 * first[0] + 10 * first[1] + first[2]
	< 100 * second[0] + 10 * second[1] + second[2])
		cout << second[0] << second[1] << second[2];
		return 0;
}