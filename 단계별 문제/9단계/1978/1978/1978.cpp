#include <iostream>
using namespace std;

int main(void)
{
	int num = 0;
	cin >> num;
	int numArr[101] = { 0 };
	int cnt = 0, check = 0;

	for (int inputData = 0; inputData < num; inputData++)
	{
		cin >> numArr[inputData];
		if (numArr[inputData] == 2)
		{
			cnt++;
			continue;
		} 

		for (int distingNum = 2; distingNum < numArr[inputData]; distingNum++)
		{
			if (numArr[inputData] % distingNum != 0)
			{
				check++;
			}
		}

		if (numArr[inputData] - 2 == check)
			cnt++;
		check = 0;
	}

	cout << cnt;
	return 0;
}