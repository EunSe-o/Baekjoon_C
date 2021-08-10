#include <iostream>
using namespace std;

int main(void)
{
	int kg = 0;
	cin >> kg;
	int cnt = 0;

	while (kg >= 3)
	{
		if (kg != 0 && kg % 5 == 0)
		{
			cnt += kg / 5;
			kg %= 5;
		}

		else if (kg != 0 && kg % 3 == 0)
		{
			kg -= 3;
			cnt++;
		}

		else if (kg > 4)
		{
			kg -= 5;
			cnt++;
		}

		else if (kg == 4)
			break;

		if (kg == 0)
			break;
	}

	if (kg != 0)
		cout << "-1";
	else
		cout << cnt;

	return 0;
}