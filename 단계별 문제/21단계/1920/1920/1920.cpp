#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;
	int* natNum = new int[tCase];
	for (int index = 0; index < tCase; index++)
		cin >> natNum[index];

	int exNum = 0;
	cin >> exNum;
	int* exist = new int[exNum];
	for (int index = 0; index < exNum; index++)
		cin >> exist[index];

	sort(natNum, natNum + tCase);

	int left = 0, right = 0, mid = 0;
	for (int repeat = 0; repeat < exNum; repeat++)
	{
		left = 0;
		right = tCase - 1;
		mid = (left + right) / 2;
		while (1)
		{
			if (natNum[mid] == exist[repeat])
			{
				printf("1\n");
				break;
			}

			else if (left >= right)
			{
				if (natNum[mid] != exist[repeat])
				{
					printf("0\n");
					break;
				}
			}

			else if (natNum[mid] > exist[repeat])
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}

			else if (natNum[mid] < exist[repeat])
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
		}
	}

	delete[] natNum;
	delete[] exist;

	return 0;
}