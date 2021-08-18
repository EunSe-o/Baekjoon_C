#include <iostream>
#include <algorithm>
using namespace std;

void Count(int* integer, int* cntCard, int tCase, int howMany)
{
	int left = 0, right = tCase - 1;
	int mid = (left + right) / 2;
	int cnt = 0;

	for (int index = 0; index < howMany; index++)
	{
		cnt = 0;
		while (1)
		{
			if (integer[mid] == cntCard[index])
			{
				cnt++;
				for (int plus = 1; mid + plus < tCase && integer[mid + plus] == integer[mid]; plus++)
					cnt++;
				for (int min = 1; mid - min >= 0 && integer[mid - min] == integer[mid]; min++)
					cnt++;
				break;
			}

			else if (left >= right)
				break;

			else if (integer[mid] > cntCard[index])
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}

			else if (integer[mid] < cntCard[index])
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
		}
		cout << cnt << " ";
	}
}

int main(void)
{
	int tCase = 0;
	cin >> tCase;

	int* integer = new int[tCase];
	for (int inputInt = 0; inputInt < tCase; inputInt++)
		cin >> integer[inputInt];

	int howMany = 0;
	cin >> howMany;

	int* cntCard = new int[howMany];
	for (int inputNum = 0; inputNum < howMany; inputNum++)
		cin >> cntCard[inputNum];

	sort(integer, integer + tCase);
	Count(integer, cntCard, tCase, howMany);


	return 0;
}