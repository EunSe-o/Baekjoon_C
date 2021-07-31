#include <iostream>
using namespace std;

void CntNum(int num)
{
	int cnt = 0, gap = 0;
	int tempNum = 0;
	int spot[3] = { 0 };

	for (int checkNum = 1; checkNum < num + 1; checkNum++)
	{
		if (0 < checkNum && checkNum < 100)
		{
			cnt++;
			continue;
		}

		else if (99 < checkNum && checkNum < 1000)
		{
			tempNum = checkNum;
			for (int index = 0; index < 3; index++)
			{
				spot[index] = tempNum % 10;
				tempNum /= 10;
			}

			gap = spot[2] - spot[1];
			if (spot[1] - spot[0] == gap)
				cnt++;
		}
	}

	cout << cnt;
}

int main(void)
{
	int num = 0;

	cin >> num;
	CntNum(num);

	return 0;
}